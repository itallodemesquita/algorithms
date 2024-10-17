// I. Solicita e armazena dez números inteiros em um vetor
// II. Informa o maior valor encontrado no vetor.

#include <stdio.h>

int main () {
    int vet [10], maior = -999999, i, cont = 1;
    for (i = 0; i <= 9; i++){
        printf("Digite o %dº número: ", cont);
        scanf("%d", &vet[i]);
        if (vet[i] > maior) {
            maior = vet[i];
        }
        cont++;
    }
    printf("O maior número digitado foi %d", maior);
    
    return 0;
}
