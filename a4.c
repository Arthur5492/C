'#include <stdio.h>

int main(){

int n1=0,cont=0;
      printf("Para finalizar o codigo digite 0. \n");
    do {

      printf("Digite um numero:");
      scanf("%i",&n1);

      if (n1>cont) cont = n1;
          }while (n1 !=0);
printf("O maior numero e: %i \n",cont);
  return 0;
}
'
