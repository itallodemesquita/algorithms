#include <stdio.h>

void writeVetor(int vetor[]) {
    
    printf("\n");

    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void printVetor(int vetor[]) {
    
    printf("\nVetor na ordem inversa: ");

    for (int i = 7; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
}

int main (void) {

    int vet[8];

    writeVetor(vet);
    printVetor(vet);

    return 0;
}