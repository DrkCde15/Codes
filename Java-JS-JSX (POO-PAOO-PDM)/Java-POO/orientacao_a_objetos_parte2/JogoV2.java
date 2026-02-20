import java.util.Random;

public class JogoV2 {

    public static void main(String [] args)throws Exception{

        var gerador = new Random();   
        var p = new Personagem();
        var p2 = new Personagem(0,0,10);
        var p3 = new Personagem(500,-5,4);
        p.nome = "Messi";
        p2.nome = "Soneca";
        p3.nome = "Mike";



        while(true){
            int oQueFazer = gerador.nextInt(4);
            switch(oQueFazer){
                case 1:
                    p.comer();
                    p2.comer();
                    p3.dormir();
                    break;
                case 2:
                    p.dormir();
                    p2.cacar();
                    p3.cacar();
                    break;
                default:
                    p.cacar();
                    p2.dormir();
                    p3.comer();
                    break;
            }
            System.out.println(p);
            System.out.println(p2);
            System.out.println(p3);
            System.out.printf("*****************\n");
            Thread.sleep(3000);
        }
    }
}