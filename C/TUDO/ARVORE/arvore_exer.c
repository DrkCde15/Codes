//. 2-Escreva uma func¸ao que conta o numero de os de uma arvore binaria.
//. 3-Escreva uma funcao que conta o numero de nos nao-folha de uma arvore binaria
//  4-Escreva uma funcao que conta o numero de folhas de uma arvore binaria
//  6-Escreva uma funcao para buscar um numero impar em uma arvore binaria NAO orde
//nada.
// altura de uma arvore.
#include <stdio.h> 
#include <time.h>
#include  "abb.h"

int nos_arvore_rec(t_no * atual) {
    int cont_esq = 0;
    int cont_dir = 0;
    if (atual->esq != NULL) {
        cont_esq = nos_arvore_rec(atual->esq);
    }
    if (atual->dir != NULL) {
        cont_dir = nos_arvore_rec(atual->dir);
    }
    return cont_esq + 1 + cont_dir;
}
int nos_arvore (t_abb * a) {
    if (esta_vazia(a)) {
        return 0;
    } else {
        return nos_arvore_rec(a->raiz);
    }
}
int nao_folha_rec(t_no * atual) {
    int cont_esq = 0;
    int cont_dir = 0;
    if (atual->esq != NULL) {
        cont_esq = nao_folha_rec(atual->esq);
    }
    if (atual->dir != NULL) {
        cont_dir = nao_folha_rec(atual->dir);
    }
    if (atual->esq == NULL && atual->dir == NULL) {
        return 0;
    }
    return cont_esq + 1 + cont_dir;
}
int nao_folha (t_abb * a) {
    if (esta_vazia(a)) {
        return 0;
    } else {
        return nao_folha_rec(a->raiz);
    }
}
int folha_rec(t_no * atual) {
    int cont_esq = 0;
    int cont_dir = 0;

    if (atual->esq == NULL && atual->dir == NULL) {
        return 1;
    }
    //as chamadas abaixo irao ocorrer ao msm tempo
    if (atual->esq != NULL) {
        cont_esq = folha_rec(atual->esq);
    }
    if (atual->dir != NULL) {
        cont_dir = folha_rec(atual->dir);
    }

    return cont_esq + cont_dir;
}
int folha (t_abb * a) {
    if (esta_vazia(a)) {
        return 0;
    } else {
        return folha_rec(a->raiz);
    }
}

int impar_rec (t_no * atual) {
    
    int impar = 0;

    if (atual->info %2 != 0) {
        return atual->info;
    }
    if (atual->esq == NULL && atual->dir == NULL) {
        return 0;
    }
    if (atual->esq != NULL) {
        if (atual->esq->info % 2 == 0) {
            impar = impar_rec(atual->esq);
        } else {
            return atual->esq->info;
        }
    }
    if (impar %2 != 0) {
        return impar;
    }

    if (atual->esq != NULL) {
        if (atual->dir->info % 2 == 0) {
            impar = impar_rec(atual->dir);
        } else {
            return atual->dir->info;
        }
    }
    
    return impar;
}
int impar (t_abb * a) {
    if (esta_vazia(a)) {
        return 0;
    } else {
        return impar_rec(a->raiz);
    }
}
int altura_rec (t_no * atual) {
    if (atual->esq == NULL && atual->dir == NULL) { //é uma folha
        return 0;
    }
    int nivel_dir = 0, nivel_esq = 0;
    if (atual->esq != NULL) {
        nivel_esq = altura_rec(atual->esq);
    }
    if (atual->dir != NULL) {
        nivel_dir = altura_rec(atual->dir);
    }
    if (nivel_dir > nivel_esq) {
        return nivel_dir+1;
    } else {
        return nivel_esq+1;
    }
   //return nivel_dir > nivel_esq ? nivel_dir + 1 : nivel_esq + 1;
}

int altura_arvore (t_abb * a) {
    if (esta_vazia(a)) return 0; 
    return altura_rec(a->raiz);
}

int main () {
    t_abb arvore;
    inicializa_abb (&arvore);
    srand(time(0));
    for (int i=1; i<=8; i++) {
        int n = rand() % 100;
        printf ("%d ", n);
        insere(n, &arvore);
    }
    int t, f, g;
    t = nos_arvore(&arvore); 
    printf("\no numero de nos eh: %d", t);

    f = nao_folha(&arvore);
    printf("\no numero de nao-folhas eh: %d", f);

    g = folha(&arvore);
    printf("\no numero de folhas eh: %d", g);

    if (impar(&arvore)) {
        printf("\no impar eh: %d ", impar(&arvore));
    } else {
        printf("\nnao tem impares na arvore");
    }
    return 0;
}