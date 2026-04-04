import java.util.Random;
public class TesteABB {
    public static void main(String[] args) {
        ABB abb = new ABB();
        Random random = new Random();
        for (int i = 1; i <= 12; i++) {
            int n = random.nextInt(100) + 1;
            System.out.print(n + " ");
            abb.insere(n);
        }
        System.out.println("\n" + abb);
        System.out.println("numero de nos: " + abb.contaNos());
        System.out.println("soma dos valores: " + abb.somaValores());
    }
}
