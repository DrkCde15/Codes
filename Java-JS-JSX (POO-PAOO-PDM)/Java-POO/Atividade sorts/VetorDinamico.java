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

    public void insertionSort() {
          for (int j = 1; j < qtde; ++j){
               int aux = elementos[j];
               int i;
               for(i = j -1; i >= 0 && elementos[i] > aux; --i){
                    elementos[i+1] = elementos[i];
               }
               elementos [i+1] = aux;
          }
    }

        public void selectionSort(){
                int i, j, pos_menor, aux;
                for(i = 0; i < qtde-1; i++){
                    pos_menor = i;
                    for(j = i+1; j<qtde; j++){
                        if(elementos[j] < elementos[pos_menor]){
                            pos_menor = j;
                        }
                    }
                    aux = elementos[pos_menor];
                    elementos[pos_menor] = elementos[i];
                    elementos[i] = aux;
            }
        }

        public void geraElementos () {
            resetVetor();
            Random random = new Random();
            while (!estaCheio())
                adicionar(random.nextInt(cap*10));
        }
        public void resetVetor(){
            qtde = 0;
        }
    }