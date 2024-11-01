#include <stdio.h>
#include <stdlib.h>


// Declarando funções (precisa estar declarado antes da chamada)
void le_vetor(int *, int, const char *);
void mostrar_vetor(int *, int, const char *);
void somaUm(int *, int *, int *, int);
int *somaDois(int *, int *, int);
int descobrir_maior(int *v, int t);
void descobrir_menor(int *, int, int *);

int main(){
    printf("\n\n\n\n\n");


    // Inicializando variaveis
    int tamanho;
    int *v1, *v2;
    int *vetorSomaUm, *vetorSomaDois;



    printf("Escolha tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Alocando os vetores na memoria dinamica
    v1 = (int *) malloc (tamanho * sizeof(int));
    v2 = (int *) malloc (tamanho * sizeof(int));


    // Colocar numeros nos vetores
    le_vetor(v1, tamanho, "Vetor 1");
    printf("\n\n");
    le_vetor(v2, tamanho, "Vetor 2");

    printf("\n\n\n");

    // Mostrar vetores na tela
    mostrar_vetor(v1, tamanho, "Vetor 1:");
    printf("\n\n");
    mostrar_vetor(v2, tamanho, "Vetor 2:");




    // Alocar vetorSomaUm na memoria dinamica
    vetorSomaUm = (int *) malloc (tamanho * sizeof(int));
    // Calcular soma colocando os valores já dentro da própria função
    somaUm(v1, v2, vetorSomaUm, tamanho); 
    printf("\n\n");
    mostrar_vetor(vetorSomaUm, tamanho, "Vetor Soma (enviando vetorSomaUm por parametro):");


    vetorSomaDois = somaDois(v1, v2, tamanho);
    printf("\n\n");
    mostrar_vetor(vetorSomaDois, tamanho, "Vetor Soma (returning endereco de vetorSoma para vetorSomaDois):");



    printf("\n\n\n");
    printf("O maior valor de v1 eh %d", descobrir_maior(v1, tamanho));


    int menor;
    descobrir_menor(v2, tamanho, &menor);
    printf("O menor elemento de v2 eh %d", menor);



    printf("\n\n\n\n\n");
    return 0;
}




// Implementação das funções

// Cria os valores dentro dos vetores
void le_vetor(int *v, int t, const char *msg){
    int i;

    printf("Digite os valores para o %s\n", msg);
    for(i=0; i<t; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &v[i]);
    }
}


// Imprime os valores do vetor na tela
void mostrar_vetor(int *v, int t, const char *msg){
    int i;
    printf("%s\n", msg);
    for(i=0; i<t; i++){
        printf("%d ", v[i]);
    }
}


// Soma o v1 e v2 e armazena esses valores no endereço presente em '*vetorSoma' (do qual é um ponteiro que armazena um endereço)
void somaUm(int *v1, int *v2, int *vetorSoma, int t){
    for(int i=0; i<t; i++){
        vetorSoma[i] = v1[i] + v2[i];
    }
}


// Soma o v1 e v2 e retorna o endereço de vetorSoma (criado dentro da função). Logo
// a variável que recebe esse endereço possuirá os valores criados no loop for
int *somaDois(int *v1, int *v2, int t){
    int *vetorSoma = (int *) malloc (t * sizeof(int));

    for(int i=0; i<t; i++){
        vetorSoma[i] = v1[i] + v2[i];
    }

    return vetorSoma;
}


// Descobre o maior valor e retorna 'maior'
int descobrir_maior(int *v, int t){
    int maior = v[0];
    for(int i=0; i<t; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }

    return maior;
}


// Descobre o menor valor armazenando ele no endereço dentro de '*menor' (do qual é um ponteiro que armazena um endereço!)
void descobrir_menor(int *v, int t, int *menor){
    *menor = v[0];

    for(int i=1; i<t; i++){
        if(v[i] < *menor){
            *menor = v[i];
        }
    }
}