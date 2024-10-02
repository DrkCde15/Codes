import java.util.Date;
import java.util.Scanner;

public class TesteOrdenacao {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("escolha o tamanho do vetor, 0 encerra: ");
        int cap = scanner.nextInt();
        VetorDinamico v;
        long ini, fim;
        while (cap > 0) {
            v = new VetorDinamico(cap);
            //v.geraElementos();
            //System.out.println("vetor: " + v);
            // ini = new Date().getTime();
            // v.bubbleSort();
            // fim = new Date().getTime();
            // System.out.println("Bubble demorou " + (fim-ini) + " ms");
            // System.out.println("Vetor ordenador pelo bubble:" + v);
            // v.resetVetor();
            v.geraElementos();;
            //System.out.println("2o vetor: ");
            ini = new Date().getTime();
            v.quick(0, cap-1);
            fim = new Date().getTime();
            System.out.println("Quick demorou " + (fim-ini) + " ms");
            //System.out.println("Vetor ordenado pelo quick " + v);
            //System.out.println("vetor ordenado: " + v);
            // ini = new Date().getTime();
            // v.quick(0, cap-1);
            // fim = new Date().getTime();
            // System.out.println("Quick 2 demorou " + (fim-ini) + " ms");
            System.out.print("escolha o tamanho do vetor, 0 encerra: ");
            cap = scanner.nextInt();
        }
        scanner.close();
    }
}
