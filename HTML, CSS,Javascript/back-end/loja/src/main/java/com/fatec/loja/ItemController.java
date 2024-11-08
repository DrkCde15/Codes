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
public class ItemController {
    @PostMapping("/api/item")
    public String gravar(@RequestBody Item obj){
        return "O item " + obj.getProduto().getNome() + " foi salvo corretamente";
    }

    @PutMapping("/api/item")
    public String alterer(@RequestBody Item obj){
        return "O item " + obj.getProduto().getNome() + " foi alterado corretamente";
    }

    @GetMapping("/api/item/{codigo}")
    public Item carregar(@PathVariable int codigo){
        Produto produto = new Produto();
        Item obj = new Item(1, produto, 10, 50.90);
        return obj;
    }

    @DeleteMapping("/api/item{codigo}")
    public String remover(@PathVariable int codigo){
        return "Registro " + codigo + " removido com sucesso!";
    }

    @GetMapping("/api/itens")
    public List<Item> listar(){
        return new ArrayList<Item>();
    }
}
