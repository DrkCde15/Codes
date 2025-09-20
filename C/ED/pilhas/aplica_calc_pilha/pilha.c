#include"pilha.h"

t_pilha constroi_pilha(int capacidade){
    t_pilha p;
    p.capacidade = capacidade;
    p.topo = 0;
    p.v = (char *) malloc (capacidade*1);
    return p;
}

void exibe_pos_ele_topo (t_pilha *p){
    printf("posicao do topo: %c\n elemento: %c\n", p->topo-1, p->v[p->topo-1]);
}

int push(char i, t_pilha *p){
    if(!esta_cheia(p)){
        p->v[p->topo] = i;
        p->topo++;
        return SUCESSO;
    }
    return FRACASSO;
}

int pop(t_pilha *p, char *desempilhado){
    if(!esta_cheia(p)){
        *desempilhado = p->v[--p->topo];
        return SUCESSO;
    }
    return FRACASSO;
}

int esta_cheia(t_pilha *p){
    return p ->topo == p ->capacidade;
}

int esta_vazia(t_pilha *p){
    return p -> topo == 0;
}

int tamannho(t_pilha *p){
    return p ->topo;
}

char * string_pilha(t_pilha *p){
    //char s[1000];
    char *s = (char *) malloc(1000);
    char s_aux[32];
    s[0] = '\0';
    if(esta_vazia (p))
        sprintf(s, "pilha vazia\n");
    else{
        for(int i=p->topo-1; i>=0; i--){
            sprintf(s_aux, "%c\n", p->v[i]);
            strcat(s, s_aux);
        }
        strcat(s, "-------------------\n");
    }
    return s;
}