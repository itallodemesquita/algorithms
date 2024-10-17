// I. solicita e armazena cinco números inteiros em um vetor
// II. o programa deve percorrer o vetor e somar todos os seus valores
// III. o programa deve exibir o resultado da soma.

#include <stdio.h>

int main () {
    int vet [5], somavet, i, cont = 1;
    for (i = 0; i <= 4; i++){
        printf("Digite o %dº número: ", cont);
        scanf("%d", &vet[i]);
        somavet = somavet + vet[i];
        cont++;
    }
    printf("A soma dos cinco números é igual a %d!", somavet);
    
    return 0;
}
