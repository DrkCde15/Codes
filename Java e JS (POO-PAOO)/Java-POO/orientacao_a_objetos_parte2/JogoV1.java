public class JogoV1 {
    public static void main(String[] args) {
        var p = new Personagem();
        p.nome = "Cristiano Ronaldo";
        p.cacar();
        System.out.printf("%s\n",p.toString());;
        p.comer();
        System.out.println(p);
        p.dormir();
        System.out.println(p);
        p.cacar();
        System.out.println(p);
        p.comer();
        System.out.println(p);
        p.dormir();
        System.out.println(p);
    }
}
