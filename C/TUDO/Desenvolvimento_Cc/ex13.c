#include <stdio.h>
int main(){
  float p1=0;
  float p2=0;
  float p3=0;
  float mediaponderada=0;

  printf("Nota da p1: ");
  scanf("%f", &p1);

  printf("Nota p2: ");
  scanf("%f", &p2);

  printf("Nota p3: ");
  scanf("%f", &p3);

  mediaponderada = (1*p1+1*p2+2*p3)/(1+1+2);
  if(mediaponderada>=60){ 
      printf("Media ponderada = %.2f\nAluno aprovado!", mediaponderada);
  }
  else{
      printf("Aluno Reprovado!\n Media Ponderada = %.2f", mediaponderada);
  }
 
  return 0;
}