#include <stdio.h>
int main(){
  int n;
  printf("Digite um ano: ");
  scanf("%i", &n);

  if((n % 400 == 0)  || (n % 4 ==0 && n % 100 != 0)){
    printf("%i, e um ano bissexto", n);
  }
  else{
    printf("%i, nao e bissexto", n);
  }
  return 0;
}