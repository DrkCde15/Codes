//Proponha um algoritmo recursivo Multip.Rec(n1,n2) que calcule a multiplicação de dois inteiros
//Crie uma func¸ao recursiva que receba dois inteiros positivos k e n e calcule k^n
#include <stdio.h>

int potencia (int k, int n) {
    if(n>0) {
        return k * potencia(k, n-1);
    }
    else {
        return 1;
    }
}

int multip_rec (int x, int y) {
    if(x==1) {
        return y;
    }
    else {
        return y + multip_rec(x-1, y);
    }
}

void exibe1 (int i, int tam, int v[]){
    if (i<tam) {
        printf("%d ", v[i]);
        exibe1 (i+1, tam, v);
    }
}

void exibe2 (int n, int v[]) {
    if (n > 0) {
        exibe2 (n - 1, v);
    }
    printf("%d ", v[n]);
}

void exibe3 (int n, int v[]){
    if(n>=0){
        printf("%d ",v[n]);
        exibe3 (n-1, v);
    }
} 

int main () {
    // printf("\n5^10 = %d\n", potencia(5, 10));
    // printf("\n25*24 = %d", multip_rec(25, 24));
    int v[5] = {1, 4, 3, 4, 5};
    printf("\nTeste 1:\n");
    exibe1(0, 5, v);
    printf("\nTeste 2:\n");
    exibe2(4, v);
    printf("\nTeste 3:\n");
    exibe3(4, v);
    
}