/*
I. solicita e armazena oito valores inteiros em um vetor,denominado de vet,
II. exibe os valores armazenados, porém na ordem inversa. */

#include <stdio.h>

int main(){
	int vet[8], i, x = 1;
	
	for (i = 0; i < 8; i++){
		printf("Digite o valor %d do vetor: ", x);
		scanf("%d", &vet[i]);
		x++;
	}
	
	printf("Valores do vetor (em ordem inversa)\n");
	
	for (i = 7; i >= 0; i--){
		printf("%d, ", vet[i]);
	}
	
	return 0;
}
