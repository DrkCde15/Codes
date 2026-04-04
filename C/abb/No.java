public class No {
    private int info;
    private No esquerdo;
    private No direito;
    public No (int info) {
        this.info = info;
    }
    public int getInfo() {
        return info;
    }
    public No getEsquerdo() {
        return esquerdo;
    }
    public No getDireito() {
        return direito;
    }
    public void setEsquerdo(No esquerdo) {
        this.esquerdo = esquerdo;
    }
    public void setDireito(No direito) {
        this.direito = direito;
    }
    @Override
    public String toString () {
        return "[" + info + "]";
    }
}