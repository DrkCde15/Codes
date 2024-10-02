public class TesteCalculadora{
    public static void main(String [] args){
        Calculadora calculadora = new Calculadora();
        System.out.println(calculadora.somar(10,5));
        System.out.println(calculadora.multiplicar(10, 5));
        System.out.println(calculadora.subtrair(10, 5));
        System.out.println(calculadora.dividir(10, 5));
    }
}