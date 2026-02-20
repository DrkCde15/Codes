public class TesteLivroDeNotasV2 {
    public static void main (String [] args){
        var meuLivro = new LivroDeNotas();
        meuLivro.setNomeDisciplina("Confecção profissional de Bolo");
        meuLivro.enviarMensagem();
        //System.out.println("\n" + meuLivro.getNomeDisciplina());
    }
}
