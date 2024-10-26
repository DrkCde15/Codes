//faça uma função para retornar o número de elementos da fila que possuem valor impar

#include "fila.h" 

int quantos_impares (t_fila *f) { //versao da prof
    if (esta_vazia(f))
        return 0;
    t_no * aux = f->primeiro;
    int cont=0;
    while (aux != NULL) {
        cont++;
        aux = aux->proximo;
    }
    //for (; aux != NULL; aux = aux->proximo) {
    //     if (aux->info % 2) cont ++;
    // }
    // return cont;
}

int cont_elementos (t_fila *f) { //minha versao
    int cont=0;
    t_no * aux = f->primeiro;
    if (esta_vazia(f)) {
        return 0;
    }
    while (aux != NULL) {
        if (aux->info % 2 == 1) {
            cont++;
        }
        aux = aux->proximo;
    }
    return cont;
}

int main () {
    t_fila fila;
    inicia_fila(&fila);
    for (int i=1; i<10; i++) { //enfileira os numeros de 1 a 9 na fila 1;
        enfileira(i, &fila);
    }
    int c = cont_elementos (&fila);
    printf("contagem dos elementos impares: %d", c);

    return 0;
}