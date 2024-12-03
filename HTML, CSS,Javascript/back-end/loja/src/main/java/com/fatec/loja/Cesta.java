package com.fatec.loja;
import java.util.List;
import java.util.Set;

import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import jakarta.persistence.Transient;
@Entity
public class Cesta {
    @Id
    private int codigo;
    @Transient
    private Cliente cliente;
    private int codigoCliente;

    public Cesta(int i, Cliente cliente2, double d, List<Item> itens2) {
        
    }
    public int getCodigoCliente() {
        return codigoCliente;
    }
    private double total = 0;

    @OneToMany(mappedBy="cesta")
    private Set<Item> itens;
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
        this.codigoCliente = cliente.getCodigo();
    }
    public double getTotal() {
        return total;
    }
    public void setTotal(double total) {
        this.total = total;
    }
    public Set<Item> getItens() {
        return itens;
    }
    public void setItens(Set<Item> itens) {
        this.itens = itens;
    }   
}