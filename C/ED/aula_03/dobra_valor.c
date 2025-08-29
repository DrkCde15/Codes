#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tamanho;
    int ocupacao;
    int *v;
} t_vetor;

void inicializa_vetor (t_vetor *, int);
int insere_valor (int, t_vetor *);
int remove_valor (int *, t_vetor *);
int esta_cheio (t_vetor *);
int esta_vazio (t_vetor *);
void exibe_vetor (t_vetor *);

int main () {
    int tamanho;
    t_vetor meu_vetor;
    printf ("digite o tamanho do vetor: ");
    scanf ("%d", &tamanho);
    inicializa_vetor(&meu_vetor, tamanho);
    exibe_vetor (&meu_vetor);
    int i;
    for (i=1; i<=100; i++) {
        insere_valor(i, &meu_vetor);
        printf ("tamanho: %d, ocupacao: %d\n", meu_vetor.tamanho, meu_vetor.ocupacao);
        exibe_vetor (&meu_vetor);
    }
    while (remove_valor(&i, &meu_vetor)) {
        printf ("%d saiu\n", i);
        printf ("tamanho: %d, ocupacao: %d\n", meu_vetor.tamanho, meu_vetor.ocupacao);
        exibe_vetor(&meu_vetor);
    }

    t_vetor clone_vetor = clone(&meu_vetor);
    printf("clone:\n");
    exibe_vetor(&clone_vetor);
    return 0;
}

void inicializa_vetor (t_vetor *vetor, int tamanho) {
    vetor->v = (int *) malloc (tamanho * sizeof(int));
    vetor->ocupacao = 0;
    vetor->tamanho = tamanho;
}
int redimensiona_vetor (t_vetor *vetor, int novo_tamanho) {
    //aloca um novo espaço de memória com novo_tamanho e guardou o endereço inicial em novo
    int *novo = (int *) malloc (novo_tamanho * sizeof(int));
    if (novo == NULL) return 0;
    //copia todos os valores do vetor original para o novo
    for (int i=0; i<vetor->ocupacao; i++)
        novo[i] = vetor->v[i];
    //ajusta a capacidade para o novo tamanho
    vetor->tamanho = novo_tamanho;
    //liberar o espaço atual que o v aponta
    free(vetor->v);
    //o atributo v (ponteiro de inteiro) recebe o valor de novo (ponteiro de inteiro)
    vetor->v = novo;
    return 1;
}
int insere_valor (int novo, t_vetor *vetor) {
    if (esta_cheio(vetor))
        if (!redimensiona_vetor (vetor, 2*vetor->tamanho)) 
            return 0;
    vetor->v[vetor->ocupacao++] = novo;
    return 1;
}

int remove_valor (int *i, t_vetor *vetor){
    if (esta_vazio(vetor)) 
        return 0;
    *i = vetor->v[--vetor->ocupacao];
    if (vetor->tamanho > 10 && vetor->ocupacao <= vetor->tamanho / 4 )
        redimensiona_vetor(vetor, vetor->tamanho / 2);
    return 1;
}

int esta_cheio (t_vetor *vetor) {
    //faixa branca
    if (vetor->ocupacao == vetor->tamanho)
        return 1;
    else 
        return 0;
    //faixa azul
    if (vetor->ocupacao == vetor->tamanho)
        return 1;
    return 0;
    //faixa roxa
    return vetor->ocupacao == vetor->tamanho ? 1 : 0;
    //ninja
    return vetor->ocupacao == vetor->tamanho;
}
int esta_vazio (t_vetor *vetor) {
    //faixa branca
    if (vetor->ocupacao == 0)
        return 1;
    else 
        return 0;
    //faixa azul
    if (vetor->ocupacao == 0)
        return 1;
    return 0;
    //faixa roxa
    return vetor->ocupacao == 0 ? 1 : 0;
    //ninja
    return vetor->ocupacao == 0;
    //jedi
    return !vetor->ocupacao;
}

void exibe_vetor (t_vetor *vetor) {
    if (esta_vazio(vetor))
        printf ("vetor vazio\n");
    else {
        for (int i=0; i<vetor->ocupacao; i++)
            printf ("%d ", vetor->v[i]);
        printf ("\n");
    }
}

t_vetor clone(t_vetor *vetor) {
    t_vetor clone_vetor;
    // Aloca memória para o novo vetor com o mesmo tamanho do original
    clone_vetor.v = (int*)malloc(vetor->tamanho * sizeof(int));
    if (clone_vetor.v == NULL) {
        printf("Erro ao alocar memória para o clone\n");
        exit(1); // Ou pode retornar uma estrutura vazia em vez de sair do programa
    }
    // Copia os valores do vetor original
    for (int i = 0; i < vetor->ocupacao; i++) {
        clone_vetor.v[i] = vetor->v[i];
    }
    // Copia o tamanho e o índice de ocupação
    clone_vetor.tamanho = vetor->tamanho;
    clone_vetor.ocupacao = vetor->ocupacao;

    return clone_vetor;
}

