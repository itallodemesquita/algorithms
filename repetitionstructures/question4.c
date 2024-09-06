// I. Imprima os números divisíveis por 2 no intervalo [10, 50]
// II. Informe quantos números foram exibidos

#include <stdio.h>
int main (){

    int nprint = 0, n;
    
    for (n = 10; n <= 50; n++){
        if (n % 2 == 0){
            printf("%d,", n);
            nprint = nprint + 1;
        }
    }
    
    printf("\n\n");
    printf("Existem %d números divisíveis por 2 no intervalo [10, 50].", nprint);

	return 0;
	}
