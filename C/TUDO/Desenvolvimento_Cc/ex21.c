#include<stdio.h>
int main(){
  int operacao;
  int soma;
  int diferenca;
  int produto;
  float divisao;
  int n1 = 0;
  int n2 = 0;

  printf("Tipos de operacao:\n1-Soma\n2-Subtracao\n3-Produto\n4-Divisao\nSelecione uma operacao: ");
  scanf("%i", &operacao);


  if(operacao == 1){
      printf("Digite um numero: ");
      scanf("%i", &n1);
      printf("Digite mais um numero: ");
      scanf("%i", &n2);
      soma = n1 + n2;
      printf("Resultado =  %i", soma);

  }else if(operacao == 2){
      printf("Digite um numero: ");
      scanf("%i", &n1);
      printf("Digite mais um numero: ");
      scanf("%i", &n2);
      if(n1>n2){
        diferenca = n1 - n2;
      }
      else if(n1<n2){
        diferenca = n2 - n1;
      }
      printf("Resultado = %i", diferenca);

  }else if(operacao == 3){
      printf("Digite um numero: ");
      scanf("%i", &n1);
      printf("Digite mais um numero: ");
      scanf("%i", &n2);
      produto = n1*n2;
      printf("Resultado: %i", produto);
    
  }else if(operacao == 4){
      printf("Digite o dividendo: ");
      scanf("%i", &n1);
      printf("Digite o divisor: ");
      scanf("%i", &n2);
      do{
          if(n2 == 0){
          printf("O divisor nao pode ser 0, por favor, digite outro numero: ");
          scanf("%i", &n2);
          }
      }while(n2 ==0);
      divisao = (float)n1/n2;
      printf("Resultado: %.2f", divisao);

    
  }else{
    printf("Operacao invalida.");
  }
  return 0;
}