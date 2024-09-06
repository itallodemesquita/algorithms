// I. Calcule o fatorial de um número n

#include <stdio.h>
int main (){

   int n, nfatorial = 1, x;
   
   printf("Digite o número no qual deseja consultar seu valor fatorial: ");
   scanf("%d", &n);
   
   if (n == 0){
       printf("%d! = %d", n, nfatorial);
   }
   if (n > 0){
      for (x = 1; x <= n; x++){
       nfatorial = nfatorial * x;
      }
      printf("%d!= %d", n, nfatorial);
   }
   
   if (n < 0){
       printf("Números negativos não possuem fatorial.");
   }
   
   
	return 0;
	}
