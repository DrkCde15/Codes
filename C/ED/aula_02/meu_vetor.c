#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int tamanho;
    int oc;
    int *v;

} t_vetor;
void imprime_vetor(t_vetor *, int);
int insere_valor(int, t_vetor *);
int esta_cheio(t_vetor *);
int esta_vazio(t_vetor *);
void exibe_vetor(t_vetor *);
int retira_valor(int *, t_vetor *);
int main(){
    int tamanho;
    t_vetor meu_vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    imprime_vetor(&meu_vetor, tamanho);
    exibe_vetor(&meu_vetor);
    // meu_vetor.oc = 36;
    // meu_vetor.tamanho = 100;
    // meu_vetor.v[2] = 15;

    int i = 10;
    while(insere_valor(i, &meu_vetor)){
        exibe_vetor (&meu_vetor);
        i+=10;
    }
    exibe_vetor(&meu_vetor);
    while(retira_valor(&i, &meu_vetor)){
        printf("Valor retirado: %d\n", i);
        exibe_vetor(&meu_vetor);
    }
    exibe_vetor(&meu_vetor);
    return 0;
}
void imprime_vetor(t_vetor *vetor, int tamanho){
    vetor->v = (int*)malloc(tamanho*sizeof(int));
    vetor->oc = 0;
    vetor->tamanho = tamanho;
}

int insere_valor(int novo, t_vetor *vetor){
    if (esta_cheio(vetor)) {
        return 0; // Vetor está cheio, não é possível inserir mais elementos
    }
    vetor->v[vetor->oc] = novo;
    vetor->oc++;
    return 1; // Inserção bem-sucedida
}

int esta_cheio(t_vetor *vetor){
    //f.branca
    if (vetor->oc == vetor->tamanho) 
        return 1;

    else
        return 0;
    //f.azul
    if (vetor->oc == vetor->tamanho) 
        return 1;
    return 0;

    //f.roxa
    return vetor->oc == vetor->tamanho ? 1 : 0;

    //ninja
    return vetor->oc == vetor->tamanho;
}

int esta_vazio(t_vetor *vetor){
        //f.branca
    if (vetor->oc == 0) 
        return 1;

    else
        return 0;
    //f.azul
    if (vetor->oc == 0)
        return 1;
    return 0;

    //f.roxa
    return vetor->oc == 0 ? 1 : 0;

    //ninja
    return vetor->oc == 0;

    //samurai
    return !vetor->oc;
}

void exibe_vetor(t_vetor *vetor){
    if(esta_vazio(vetor)){
        printf("Vetor vazio\n");
    }
    else{
        for(int i=0; i<vetor->oc; i++)
            printf("%d\n", vetor->v[i]);
    }
}

int retira_valor(int *i, t_vetor *vetor){
    if (esta_vazio(vetor)) {
        return 0;
    }
    *i = vetor->v[--vetor->oc];
    return 1;
}