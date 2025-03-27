#include <stdio.h>

void writeVetorA(float vetorA[])
{
    printf("\n");
    printf("Preenchendo o vetor A: \n");
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &vetorA[i]);
    }
}

void writeVetorB(float vetorA[], float vetorB[]) {

    printf("\n");
    printf("Preenchendo o vetor B...");
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        if (i == 0) {
            vetorB[i] = vetorA[i];
        } else if (i % 2 == 0) {
            vetorB[i] = (vetorA[i]) * 5;
        } else if (i % 2 != 0 ) {
            vetorB[i] = (vetorA[i]) + 5;
        }
    }

}

void printVetor(float vetor[], char ab) {
    
    printf("\nVetor %c: ", ab);

    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%f. ", vetor[i]); // Põe um ponto final no último índice
        } else {
            printf("%f, ", vetor[i]); // Informa passagem com vírgula
        }
        
    }
}

int main (void) {

    float vetA[5];
    float vetB[5];
    char a = 'a';
    char b = 'b';

    writeVetorA(vetA);
    writeVetorB(vetA, vetB);

    printVetor(vetA, a);
    printVetor(vetB, b);

    return 0;

}