package com.fatec.loja;

import java.util.ArrayList;
import java.util.List;

public class Cesta {
    private int codigo;
    private Cliente cliente = new Cliente();
    private double total;
    private List<Item> itens = new ArrayList<Item>();

    public Cesta() {}

    public Cesta(int codigo, Cliente cliente, double total, List<Item> itens) {
        this.codigo = codigo;
        this.cliente = cliente;
        this.total = total;
        this.itens = itens;
    }

        
    public int getCodigo() {
        return codigo;
    }
    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }
    public Cliente getCliente() {
        return cliente;
    }
    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }
    public double getTotal() {
        return total;
    }
    public void setTotal(double total) {
        this.total = total;
    }
    public List<Item> getItens() {
        return itens;
    }
    public void setItens(List<Item> itens) {
        this.itens = itens;
    }

    
}
