import java.util.Random;

public class Personagem {
    // variáveis de instância(objeto)
    String nome;
    //encapsula energia
    private int energia;
    private int fome;
    private int sono;
    //coloca itens possiveis de se obter em um vetor
    final String itensPossiveis [] = {"Javali selvagem", "amora", "batata frita", "onça", "bola de ouro"};
    //cria um vetor dinamico para os itens do personagem!
    VetorDinamico itens = new VetorDinamico();

    // esse é o construtor padrão
    // criado automaticamente pelo compilador, ainda que não seja escrito
    // explicitamente
    Personagem() {
        nome = null;
        energia = 10;
        fome = 0;
        sono = 0;

        //ao chamar o metodo construtor da classe personagem, ela automaticamente, adiciona 4 itens ao inventario!
        for(int i = 0; i < 4; i++){
            adicionarItem();
        }
    }

    // construtor personalizado
    // o que viabiliza a sua existência é a sobrecarga de construtores
    Personagem(String nome, int energia, int fome, int sono) {
        this.nome = nome;
        if (energia >= 0 && energia <= 10)
            this.energia = energia;
        if (fome >= 0 && fome <= 10)
            this.fome = fome;
        if (sono >= 0 && sono <= 10)
            this.sono = sono;

        for(int i = 0; i < 4; i++){
            adicionarItem();
        }
    }

    void adicionarItem() {
        //adiciona um item aleatorio do vetor dos itens possiveis para o inventario
        var gerador = new Random();
        itens.adicionar(itensPossiveis[gerador.nextInt(5)]);
    }

    void cacar() {
        if (energia >= 2) {
            System.out.printf("%s esta cacando...\n", nome);
            energia -= 2; // energia = energia - 2;
            //adiciona 1 item ao inventario
            adicionarItem();
        } else {
            System.out.printf("%s esta sem energia para cacar...\n", nome);
        }
        fome = Math.min(fome + 1, 10);
        // resolver com o ternário
        sono = sono < 10 ? sono + 1 : sono;
    }

    void comer() {
        // se tiver fome
        // comer e reduzir o valor de fome de 1
        // aumentar o valor de energia de 1
        // caso contrario
        // so vai avisar que esta sem fome
        switch (fome) {
            case 0:
                System.out.printf("%s esta sem fome....\n", nome);
                break;
            default:
                //so pode comer se tiver itens no inventario
                if(itens.estaVazio()){
                    System.out.printf("%s nao pode comer, pois nao possui itens\n", nome);
                }
                else{
                    //ao comer, o personagem perde um item de seu inventario!!!!
                    System.out.printf("%s esta comendo...\n", nome);
                    --fome;
                    energia = (energia == 10 ? energia : energia + 1);
                    itens.removerNoFinal();
                }    
        }
    }

    void dormir() {
        if (sono >= 1) {
            System.out.printf("%s esta dormindo...\n", nome);
            sono -= 1;
            energia = Math.min(energia + 1, 10);
        } else {
            System.out.printf("%s esta sem sono...\n", nome);
        }
    }

    //retorna o valor de true se energia <= 0
    Boolean morreu(){
        if(energia<=0)return true;
        return false;
    }

    void receberAtaque(){
        energia--;
    }

    //recebe como parametros um objeto da classe Personagem
    //ativa o metodo receberAtaque(), fazendo com que o inimigo perca 1 energia!!!!
    void atacar(Personagem inimigo){
        System.out.println("\n" + nome + " atacou " + inimigo.nome + "...\n");
        inimigo.receberAtaque();
    }

    public String toString() {
        var sb = new StringBuilder("");
        sb.append(nome);
        sb.append(": (e:").append(energia);
        sb.append(", f:").append(fome);
        sb.append(", s:").append(sono).append(")");
        sb.append("\nItens: ");
        //para cada item presente no vetor elementos do objeto itens
        for(String item : itens.getElementos()){
            //ele liga mais uma string ao stringbuilder, contendo o nome do item...
            sb.append("|").append(item).append("|");
        }
        return sb.toString();
        // return String.format(
        //         "%s: (e:%d, f:%d, s:%d)",
        //         nome, energia, fome, sono);
    }

}