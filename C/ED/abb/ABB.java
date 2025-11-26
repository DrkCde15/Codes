public class ABB {
    private No raiz;
    //construtor é o padrão, isto é, raiz = null
    //não temos get e set porque manipular a raiz é de interesse só da própria classe

    public boolean estaVazia () {
        return raiz == null;
    }
    public void insere (int info) {
        No novo = new No(info);
        if (estaVazia()) raiz = novo;
        else insereRec (novo, raiz);
    }
    private void insereRec (No novo, No atual) {
        if (novo.getInfo() > atual.getInfo()) {//vai para direita
            if (atual.getDireito() == null)
                atual.setDireito(novo);
            else 
                insereRec(novo, atual.getDireito());
        }
        else {//vai para esquerda
            if (atual.getEsquerdo() == null) 
                atual.setEsquerdo(novo);
            else 
                insereRec(novo, atual.getEsquerdo());
        }
    }
    @Override
    public String toString () {
        if (estaVazia()) return "arvore vazia\n";
        return toStringRec1(raiz);
    }
    private String toStringRec1 (No atual) {
        String s = "";
        if (atual.getEsquerdo() != null) s += toStringRec1(atual.getEsquerdo());
        s += atual.getInfo() + " ";
        if (atual.getDireito() != null) s += toStringRec1(atual.getDireito());
        return s;
    }
    private String toStringRec2 (No atual) {
        String s = "";
        if (atual != null)
            s += toStringRec2(atual.getEsquerdo()) + 
                 atual.getInfo() + " " + 
                 toStringRec2(atual.getDireito());
        return s; 
    }
    
    public int contaNos() {
        return contaNosRec(raiz);
    }
    private int contaNosRec(No atual) {
        if (atual == null) return 0;
        return 1 + contaNosRec(atual.getEsquerdo()) + contaNosRec(atual.getDireito());
    }
    public int somaValores() {
        return somaValoresRec(raiz);
    }
    private int somaValoresRec(No atual) {
        if (atual == null) return 0;
        return atual.getInfo() + 
               somaValoresRec(atual.getEsquerdo()) + somaValoresRec(atual.getDireito());
    }
}
