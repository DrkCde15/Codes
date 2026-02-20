import java.util.Random;

public class Jogo {
    public static void main(String[] args) throws Exception {
        // Cria um objeto Random para gerar números aleatórios
        var gerador = new Random();
        // Cria dois personagens com atributos específicos
        var p1 = new Personagem("Cristiano Ronaldo", 10, 9, 0);
        var p2 = new Personagem("Lionel Messi", 8, 5, 5);
        int oQueFazer; // Variável para determinar a ação a ser realizada
        int contDias = 0; // Contador de dias
        String campeao = new String(); // Variável para armazenar o nome do campeão
        
        // Enquanto pelo menos um personagem estiver vivo
        while(!p1.morreu() || !p2.morreu()){
            contDias++; // Incrementa o contador de dias
            System.out.println("\nDia atual: " + contDias + "\n"); // Exibe o dia atual
            
            // Sorteia qual personagem irá atacar
            oQueFazer = gerador.nextInt(2);
            if(!p1.morreu() && !p2.morreu()){
                if(oQueFazer == 0)
                    p1.atacar(p2);
                else
                    p2.atacar(p1);
            }

            // Se o personagem p1 estiver vivo
            if(!p1.morreu()){
                // Sorteia a próxima ação do personagem p1
                oQueFazer = gerador.nextInt(3);
                switch(oQueFazer){
                    case 0:
                        p1.comer();
                        break;
                    case 1:
                        p1.cacar();
                        break;
                    default:
                        p1.dormir();
                        break;
                }
                System.out.println(p1); // Exibe os atributos do personagem p1
                System.out.printf("\n");
            }
            
            // Se o personagem p2 estiver vivo
            if(!p2.morreu()){
                // Sorteia a próxima ação do personagem p2
                oQueFazer = gerador.nextInt(3);
                switch(oQueFazer){
                    case 0:
                        p2.comer();
                        break;
                    case 1:
                        p2.cacar();
                        break;
                    default:
                        p2.dormir();
                        break;
                }
                System.out.println(p2); // Exibe os atributos do personagem p2
            }

            // Determina o campeão se ainda não houver um
            if (campeao.isEmpty()){
                // p1 se torna campeão se p2 morreu e p1 está vivo
                if(p2.morreu() && !p1.morreu()){
                    campeao = p1.nome;
                    System.out.println("\n" + p2.nome + " morreu... " + campeao + " se tornou o campeao!\n");
                }

                // p2 se torna campeão se p1 morreu e p2 está vivo
                if(p1.morreu() && !p2.morreu()){
                    campeao = p2.nome;
                    System.out.println("\n" + p1.nome + " morreu... " + campeao + " se tornou o campeao!\n");
                }
                // Empate se ambos morrerem
                if(p1.morreu() && p2.morreu()){
                    System.out.println("...Ocorreu um empate????");
                }
                
            }

            System.out.printf("\n\n-----------------------------\n\n");
            Thread.sleep(3000); // Aguarda 3 segundos antes de continuar para simular o tempo
        }
        // Se houver um campeão e ambos os jogadores estiverem mortos, informa que o campeão morreu
        if(!campeao.isEmpty())
            System.out.printf("O campeao, %s, morreu.\n\nFim de jogo.",campeao);
    }
}