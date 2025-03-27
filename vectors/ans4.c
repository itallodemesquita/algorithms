#include <stdio.h>

void writeVetor(int vetor[])
{
    printf("\n");
    printf("Vetor de numeros inteiros\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void maiorValor (int vetor[]) {

    int maior = vetor[0];

    for (int i = 1; i < 10; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nO maior numero armazenado no vetor eh o numero %d", maior);

}

int main (void) {
    
    int vet[10];

    writeVetor(vet);
    maiorValor(vet);

    return 0;
}