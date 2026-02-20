public class Vetordinamico {
    private int qtde;
    private int cap;
    private int[] elementos; 

    // Variável de classe (todas as instâncias compartilham o mesmo valor)
    private static final int CAP_MINIMA = 4; // Capacidade mínima

    // Construtor padrão
    Vetordinamico() {
        cap = CAP_MINIMA; // Define a capacidade inicial como CAP_MINIMA
        qtde = 0; // Inicializa a quantidade de elementos como zero
        elementos = new int[CAP_MINIMA]; // Cria um array com a capacidade inicial
    }

    // Construtor personalizado com capacidade mínima especificada
    Vetordinamico(int capMinima) {
        double aux = capMinima;
        while (aux >= 2)
            aux /= 2; // Divide por 2 até que seja menor que 2
        
            // Se o resultado for 1 e capMinima for maior que 3, use capMinima; caso contrário, use CAP_MINIMA
        cap = (aux == 1 && capMinima > 3) ? capMinima : CAP_MINIMA;
        elementos = new int[cap]; // Cria um array com a capacidade definida
    }

    // Método para adicionar um elemento ao vetor
    void adicionar(int elemento) {
        
        // Se o vetor estiver cheio, redimensionar antes de adicionar
        if (qtde == cap) {
            redimensionar();
        }
        elementos[qtde] = elemento; // Adiciona o elemento ao vetor
        qtde++; // Incrementa a quantidade de elementos
    }

    // Método para verificar se o vetor está cheio
    boolean estaCheio() {
        
        // Verifica se a quantidade de elementos é igual à capacidade
        return qtde == cap;
    }

    // Método para redimensionar o vetor
    private void redimensionar() {
        
        // Aloca um novo vetor auxiliar com o dobro da capacidade atual
        int[] auxiliar = new int[2 * cap];
        
        // Copia todos os elementos do vetor elementos para o vetor auxiliar
        System.arraycopy(elementos, 0, auxiliar, 0, qtde);
        
        // Ajusta a capacidade para o novo valor dobrado
        cap *= 2;
        
        // Atualiza o ponteiro elementos para apontar para o novo vetor
        elementos = auxiliar;
    }
}