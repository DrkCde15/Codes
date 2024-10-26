#include <stdio.h>
#include <math.h>
int main(){
  int a = 0;
  int b = 0;
  int c = 0;
  int delta = 0;
  double x = 0;
  double x2 = 0;

  printf("Digite o valor de a: ");
  scanf("%i", &a);

  printf("Digite o valor de b: ");
  scanf("%i", &b);

  printf("Digite o valor de c: ");
  scanf("%i", &c);

  if(a==0){
    printf("Nao e uma equacao do segundo grau!");
  }
  else{
    delta = pow(b, 2) - (4*a*c);

    if(delta < 0){
        printf("Não existe raiz real");
    }
    else if(delta == 0){
      x = -(b) + sqrt(delta)/(2*a);
      printf("Raiz unica x= %f", x);
    }
    else{
      x = (-(b) + sqrt(delta))/(2*a);
      x2 = (-(b) - sqrt(delta))/(2*a);
      printf("x= %.1f, x2= %.1f ", x, x2);
    }
  }

  return 0;
}