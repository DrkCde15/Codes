public class LivroDeNotas{
    
    private String nome;


    public LivroDeNotas(String nomeMateria){
        this.nome = nomeMateria;
    }
    public LivroDeNotas(){}

    
    public void enviarMensagem(String materia){
        System.out.printf("Bem vindo a matéria de %s",materia);
    }
    public void enviarMensagem(){
        System.out.printf("Bem vindo a matéria de %s",nome);
    }
    public void setNomeDisciplina(String nomeMateria){
        this.nome = nomeMateria;
    }
    public String getNomeDisciplina(){
        return nome;
    }
}