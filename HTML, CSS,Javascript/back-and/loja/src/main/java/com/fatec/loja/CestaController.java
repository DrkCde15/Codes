package com.fatec.loja;

import java.util.ArrayList;
import java.util.List;

import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class CestaController {
    @PostMapping("/api/cesta")
    public String gravar(@RequestBody Cesta obj){
        return "O item da cesta " + obj.getItens() + " foi salva corretamente";
    }

    @PutMapping("/api/cesta")
    public String alterar(@RequestBody Cesta obj){
        return "O item da cesta " + obj.getItens() + " foi alterada corretamente";
    }

    @GetMapping("/api/cesta/{codigo}")
    public Cesta carregar(@PathVariable int codigo){
        Cliente cliente = new Cliente();
        List<Item> itens = new ArrayList<>();      
        Cesta obj = new Cesta(1, cliente, 100.00, itens);
        return obj;
    }

    @DeleteMapping("/api/cesta/{codigo}")
    public String remover(@PathVariable int codigo){
        return "Registro " + codigo + " removido com sucesso!";
    }

    @GetMapping("/api/cestas")
    public List<Cesta> listar(){
        return new ArrayList<Cesta>();
    }
}
