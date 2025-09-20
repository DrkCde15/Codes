#include<stdio.h>

void mm(int v[], int *min, int *max);
void copia_vetor(int *v, int *w);

int main(){
    int v[5];
    int *w;
    for(int i=0; i<5; i++){
        v[i] = i+10;
    }
    // printf("%p", v);
    // printf("\n%p", v+1);
    int min, max;
    mm(v, &min, &max);
    printf("\nmaximo = %d\nminimo = %d", max, min);
    // copia_vetor(v, w);
    return 0;
}

void mm(int v[], int *min, int *max){
    int aux = v[0];
    for(int i=1; i<5; i++)
        if(v[i]<aux)
            aux = v[i];
    *min = aux;
    *max = v[0];
    for(int i=1; i<5; i++)
        if(v[i] > *max)
            *max = v[i];
    
}
void copia_vetor(int *v, int *w){
    int copia[5];
    for(int i=0; i<5; i++)
        copia[i] = v[i];
    w = copia;
}