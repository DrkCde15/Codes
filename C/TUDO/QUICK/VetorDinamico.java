import java.util.Random;

public class VetorDinamico {
    private int qtde;
    private int cap;
    private int [] elementos;

    public static final int CAP_MINIMA = 4;

    VetorDinamico(){
        cap = CAP_MINIMA;
        qtde = 0;
        elementos = new int[CAP_MINIMA];
    }

    VetorDinamico(int cap){
        this.cap = cap;
        qtde = 0;
        elementos = new int[cap];
    }
    boolean estaCheio(){
      return qtde == cap;
    }

    void redimensionar(){
      int[] auxiliar = new int[cap*2];
      cap *= 2;

      int i=0;
      for(int valor : elementos){
        auxiliar[i] = valor;
        i++;
      }
      
      elementos = auxiliar;
    }

    void adicionar(int elemento){
      if(estaCheio()){
        redimensionar();
      }

      elementos[qtde] = elemento;
      qtde++;
    }

    void adicinarSemRepeticao(int e){
      if(!existe(e)){
        adicionar(e);
      }
    }

    boolean existe(int e){
      for(int i=0; i<qtde; i++){
        if(e == elementos[i]){
          return true;
        }
      }
      return false;
    }

    int tamanho(){
      return qtde;
    }

    void removerNoFinal(){
      qtde -= 1;
    }

    boolean estaVazio(){
      return qtde == 0;
    }

    boolean estaUmQuartoCheio(){
      return qtde == (cap / 4);
    }

    void reduzirTamanho(){
      if(!estaVazio()){
        removerNoFinal();

        if(cap>4 && estaUmQuartoCheio()){
          cap /= 2;
        }
      } 
    }

    public String toString(){
      StringBuilder sb = new StringBuilder("");

      sb.append("Qtde: ").append(qtde);
      sb.append("\n");
      sb.append("Cap: ").append(cap);
      sb.append("\n");
      sb.append(qtde > 0 ? "Elementos: " : "");
      for(int i=0; i<qtde; i++){
        sb.append(elementos[i]).append(" ");
      }

      return sb.toString();
    }
    public void bubbleSort() {
        for (int i=1; i<qtde; i++)
            for (int j=0; j<qtde-i; j++)
                if (elementos[j] > elementos[j+1]) {
                    int aux = elementos[j];
                    elementos[j] = elementos[j+1];
                    elementos[j+1] = aux;
                }
    }
    public void geraElementos () {
        Random random = new Random();
        while (!estaCheio())
            adicionar(random.nextInt(cap*10));
    }
    public void resetVetor() {
        qtde = 0;
    }
    int partition (int p, int r) {
        int x = elementos[r];
        int i = p-1;
        for (int j = p; j < r; j++) {
            if(elementos[j] <= x) {
                i = i + 1;
                int aux = elementos[i];
                elementos[i] = elementos[j];
                elementos[j] = aux;
            }
        }
        i = i + 1;
        elementos[r] = elementos[i];
        elementos[i] = x;
        return i;
    }
    public void quick (int p, int r) {
      System.out.println("p = " + p + ", r = " + r);
      if (p < r) {
        int q = partition(p, r);
        System.out.println("q = " + q);
        quick(p, q-1);
        quick(q+1, r);
      }
    }
}