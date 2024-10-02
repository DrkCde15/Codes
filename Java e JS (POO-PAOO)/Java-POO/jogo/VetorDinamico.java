import java.util.Arrays;

public class VetorDinamico {
    // variáveis de instância (cada instância ou objeto tem a sua cópia)
    private int qtde; // quantidade de elementos atualmente no vetor
    private int cap; // capacidade máxima do vetor
    private String [] elementos; // vetor que armazena os elementos
    // variável de classe (todas as instâncias compartilham este mesmo valor)
    private static final int CAP_MINIMA = 4; // capacidade mínima do vetor

    // Construtor padrão que inicializa o vetor com capacidade mínima
    VetorDinamico() {
        cap = CAP_MINIMA;
        qtde = 0;
        elementos = new String [CAP_MINIMA];
    }

    // Construtor que inicializa o vetor com uma capacidade mínima especificada
    VetorDinamico(int capMinima) {
        // Define a capacidade inicial do vetor com base na capacidade mínima especificada
        double aux = capMinima;
        while (aux >= 2)
            aux /= 2;
        cap = aux == 1 && capMinima > 3 ? capMinima : CAP_MINIMA;
    }

    // Método para adicionar um elemento ao vetor
    void adicionar(String elemento) {
        // se o vetor estiver cheio, redimensiona antes de adicionar
        if (estaCheio())
            redimensionar();
        elementos[qtde] = elemento;
        qtde++;
    }

    // Método para verificar se o vetor está cheio
    boolean estaCheio() {
        // Retorna verdadeiro se a quantidade de elementos for igual à capacidade
        return qtde == cap;
    }

    // Método para redimensionar o vetor dobrando sua capacidade
    private void redimensionar() {
        // Aloca um novo vetor com o dobro da capacidade atual
        String [] aux = new String [cap * 2];
        // Copia todos os elementos do vetor original para o novo vetor
        for (int i = 0; i < cap; i++) {
            aux[i] = elementos[i];
        }
        // Atualiza a capacidade para o novo valor dobrado
        cap *= 2;
        // Atualiza o vetor de elementos para apontar para o novo vetor
        elementos = aux;
    }

    // Método para adicionar um elemento ao vetor sem repetição
    void adicionarSemRepeticao(String e) {
        // Verifica se o elemento já existe no vetor antes de adicionar
        if (!existe(e))
            adicionar(e);
    }

    // Método para verificar se um elemento já existe no vetor
    boolean existe(String e) {
        for (int i = 0; i < qtde; i++)
            if (e == elementos[i])
                return true;
        return false;
    }

    // Método para obter o tamanho atual do vetor
    int tamanho() {
        return qtde;
    }

    // Método para remover o último elemento do vetor
    void removerNoFinal() {
        // Se o vetor não estiver vazio, remove o último elemento
        if (!estaVazio()) {
            qtde--;
            // Se o vetor não estiver vazio e estiver um quarto cheio, reduz o tamanho
            if (!estaVazio() && estaUmQuartoCheio()) {
                reduzirTamanho();
            }
        }
    }

    // Método para verificar se o vetor está vazio
    public boolean estaVazio() {
        return qtde == 0;
    }

    // Método para verificar se o vetor está um quarto cheio
    boolean estaUmQuartoCheio() {
        return qtde == cap / 4;
    }

    // Método para reduzir pela metade a capacidade do vetor
    void reduzirTamanho() {
        // Reduz a capacidade pela metade e cria um novo vetor com a nova capacidade
        cap /= 2;
        String aux [] = new String [cap];
        // Copia os elementos do vetor original para o novo vetor
        for (int i = 0; i < qtde; i++) {
            aux [i] = elementos[i];
        }
        // Atualiza o vetor de elementos para apontar para o novo vetor
        elementos = aux;
    }

    // Método para obter uma cópia dos elementos do vetor
    String[] getElementos() {
        // Retorna uma cópia dos elementos até a quantidade atual de elementos
        return Arrays.copyOf(elementos, qtde);
    }

    // Método para representar o vetor como uma string
    public String toString() {
        StringBuilder sb = new StringBuilder("");
        sb.append("Qtde: ").append(qtde);
        sb.append("\n");
        sb.append("Cap: ").append(cap);
        sb.append(qtde > 0 ? "\nElementos: " : "");
        for (int i = 0; i < qtde; i++) {
            sb.append(elementos[i]).append(" ");
        }
        return sb.toString();
    }
}