#include <stdio.h>

void writeVetor(int vetor[])
{
    printf("\n");
    printf("Vetor de numeros inteiros\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void somaVetor(int vetor[])
{
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma = soma + vetor[i];
    }

    printf("\nA soma dos numeros do vetor eh: %d", soma);
}

int main (void){

    int vet[5];

    writeVetor(vet);
    somaVetor(vet);

    return 0;

}