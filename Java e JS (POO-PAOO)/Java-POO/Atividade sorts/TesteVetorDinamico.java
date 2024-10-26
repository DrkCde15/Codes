import java.util.Date;

public class TesteVetorDinamico{
    public static void main(String[] args) {
        //System.out.print("escolha o tamanho do vetor, 0 encerra: ");
        int cap = 200000;
        VetorDinamico v;
        long ini, fim;
        while (cap <= 1200000){
            System.out.printf("------------------------------------------------------------------------------------\ncap: %d\n", cap);
            v = new VetorDinamico(cap);

            System.out.printf("\n\ni:\n");
            for(int i = 0; i < 7; i++){
                v.geraElementos();
                ini = new Date().getTime();
                v.insertionSort();
                fim = new Date().getTime();
                System.out.printf("%12d", fim-ini);
            }

            System.out.printf("\n\nb:\n");
            for(int i = 0; i < 7; i++){
                v.geraElementos();
                ini = new Date().getTime();
                v.bubbleSort();
                fim = new Date().getTime();
                System.out.printf("%12d", fim-ini);
            }

            System.out.printf("\n\ns:\n");
            for(int i = 0; i < 7; i++){
                v.geraElementos();
                ini = new Date().getTime();
                v.selectionSort();
                fim = new Date().getTime();
                System.out.printf("%12d", fim-ini);
            }

            System.out.printf("\n\n");
            cap += 200000;
        }
    }
}

