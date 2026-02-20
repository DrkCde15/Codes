import javax.swing.JOptionPane;
public class TesteLivroDeNotas {
    public static void main(String [] args){
        var livroDeNotas = new LivroDeNotas(JOptionPane.showInputDialog("Insira o nome da matéria aqui"));
        livroDeNotas.enviarMensagem();
    }
}
