#include "pilha.h"

void converte_binario(int n){
    t_pilha p;
    p = constroi_pilha(100);
    while(n>0){
        push(n%2, &p);
        n = n/2;
        printf("%s", string_pilha(&p));
    }
}
int main(){
    t_pilha p=constroi_pilha(5);
    int i=2;
    while(push(i, &p)){
        i += 2;
        //printf("%d\n", i);
        printf("%s", string_pilha(&p));
    }
    do {
        if(pop(&p, &i)){
            printf("%d foi desempilhado\n", i);
            printf("%s", string_pilha(&p));
        }
    } while(!esta_vazia(&p));
    return 0;
}

// 1. ler uma string
// 2. para cada caracter: 
// -> sinal ou numero: ignora
// -> '(': empilha
// -> ')': tenta desempilhar
// se 'pilha vazia': erro
// 3. quando finalizar a string, se a pilha não estiver vazia: erro