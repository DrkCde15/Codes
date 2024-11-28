package com.fatec.loja;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.Transient;

@Entity
public class Item {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO) 
    private int codigo;
    private int codigoProduto;
    @Transient
    private Produto produto = new Produto();
    private int quantidade = 0;
    private double valor = 0;
    private int codigoCesta = 0;

     @ManyToOne
    private Cesta cesta; 

    public Cesta getCesta() {
        return cesta;
    }

    public void setCesta(Cesta cesta) {
        this.cesta = cesta;
    }

    public Item(int i, Produto produto2, int j, double d) {

    }
    public int getCodigoCesta() {
        return codigoCesta;
    }
    public void setCodigoCesta(int codigoCesta) {
        this.codigoCesta = codigoCesta;
    }
   

    public int getCodigoProduto() {
        return codigoProduto;
    }
    public int getCodigo() {
        return codigo;
    }
    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }
    public Produto getProduto() {
        return produto;
    }
    public void setProduto(Produto produto) {
        this.produto = produto;
        this.codigoProduto = produto.getCodigo();
    }
    public int getQuantidade() {
        return quantidade;
    }
    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }
    public double getValor() {
        return valor;
    }
    public void setValor(double valor) {
        this.valor = valor;
    }

}
