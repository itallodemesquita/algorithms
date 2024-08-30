/* Exibe o somatório dos valores pares no intervalo 1 < x <= 500.

#include <stdio.h>
int main (){
	int soma = 0, x = 1;
	do{
		if (x % 2 == 0){
			soma = soma + x;}
			x++;
	}while (x <= 500); 
	printf("%d", soma);
	return 0;
	}
