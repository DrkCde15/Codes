package com.fatec.loja;

import java.util.List;
import java.util.Map;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ClienteController {

    public ClienteController() {
    }
    private boolean camposVazios(Cliente obj) {
        return obj.getNome().isEmpty() || obj.getEmail().isEmpty() || obj.getSenha().isEmpty() || obj.getTelefone().isEmpty() || 
            obj.getDocumento().isEmpty() || obj.getLogradouro().isEmpty()|| obj.getCep().isEmpty() || 
            obj.getCidade().isEmpty() || obj.getUf().isEmpty();
    }


    @Autowired
    ClienteRepository bd;

    @PostMapping("/api/cliente")
    public String gravar(@RequestBody Cliente obj){
        if (camposVazios(obj)) {
            return "Todos os campos devem ser preenchidos";
        }
        Optional<Cliente> existente = bd.findByEmail(obj.getEmail(), obj.getDocumento());
        if (existente.isPresent()) {
            return "O cliente com esses dados já existe";
        }
        bd.save(obj);

        return "O cliente " + obj.getNome() + " foi salvo corretamente";
    }

    @PutMapping("/api/cliente")
    public String alterar(@RequestBody Cliente obj){
        if (camposVazios(obj)) {
            return "Todos os campos devem ser preenchidos";
        }
        Optional<Cliente> existente = bd.findById(obj.getCodigo());
        if (!existente.isPresent()) {
            return "O cliente com esses dados não existe";
        }
        bd.save(obj);
        return "O cliente " + obj.getNome() + " foi alterado corretamente";
    }

    @GetMapping("/api/cliente/{codigo}")
    public Cliente carregar(@PathVariable int codigo){
        Optional<Cliente> obj = bd.findById(codigo);
        if (obj.isPresent()) {
            return obj.get();
        } else {
            return null;
        }
    }
    @CrossOrigin(origins = "*")
    @DeleteMapping("/api/cliente/{codigo}")
    public String remover(@PathVariable int codigo) {
        if (bd.existsById(codigo)) {
            bd.deleteById(codigo);
            return "Registro " + codigo + " removido com sucesso!";
        } else {
            return "Cliente não encontrado";
        }
    }

    @GetMapping("/api/clientes")
    public List<Cliente> listar(){
        return bd.findAll();
    }

    @PostMapping("/api/cliente/login")
    public ResponseEntity<?> fazerLogin(@RequestBody Cliente obj) {
        if (obj.getEmail() == null || obj.getEmail().trim().isEmpty() || obj.getSenha() == null || obj.getSenha().trim().isEmpty()) {
            System.out.println("Campos obrigatórios faltando");
            return ResponseEntity.badRequest().body(Map.of("mensagem", "Os campos email e senha são obrigatórios."));
        }
    
        System.out.println("Tentando login com email: " + obj.getEmail());
        Optional<Cliente> retorno = bd.login(obj.getEmail(), obj.getSenha());
        if (retorno.isPresent()) {
            System.out.println("Login bem-sucedido");
            return ResponseEntity.ok(retorno.get());
        } else {
            System.out.println("Login falhou: Usuário ou senha inválidos");
            return ResponseEntity.status(HttpStatus.UNAUTHORIZED).body(Map.of("mensagem", "Usuário ou senha inválidos"));
        }
    }    
    
    @PostMapping("/api/cliente/recupera")
    public ResponseEntity<?> recuperarSenha(@RequestBody Cliente obj) {
        String email = obj.getEmail();
        
        Optional<Cliente> retorno = bd.recuperaSenha(email);
        if (retorno.isPresent()) {
            Cliente cliente = retorno.get();
            String novaSenha = "password123456";
            
            if (cliente.getSenha().equals(novaSenha)) {
                return ResponseEntity.status(HttpStatus.BAD_REQUEST).body(Map.of("mensagem", "A nova senha não pode ser a mesma que a atual."));
            }
            cliente.setSenha(novaSenha);
            bd.save(cliente);
            return ResponseEntity.ok(Map.of("mensagem", "Senha redefinida com sucesso."));
        } else {
            return ResponseEntity.status(HttpStatus.NOT_FOUND).body(Map.of("mensagem", "E-mail não encontrado."));
        }
    }
    
}
