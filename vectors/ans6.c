#include <stdio.h>

void writeVetor(int vetor1[]) {
    
    printf("\n");
    printf("Preenchendo o vetor 1...\n");

    for (int i = 0; i < 5; i++) {

        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor1[i]);

        if (vetor1[i] < 0) {
            do {
                printf("Numero invalido! Digite um numero positivo.\n");
                printf("Digite o %dº numero: ", i + 1);
                scanf("%d", &vetor1[i]);
            } while (vetor1[i] < 0);
        }
    
    }
}

void fatorialVetor (int vetor1[], int vetor2[]) {

    printf("\nPreenchendo o vetor 2...\n");

    for (int i = 0; i < 5; i++) { // Loop que percorre todos os elementos do vetor

        int fatorial = 1; // Fatorial recebe o valor 1 no início do laço

        for (int j = 1; /* índice */ j <= vetor1[i]; /* o índice vai até o valor guardado no elemento do primeiro vetor*/ j++) { 
            fatorial *= j; /* Fatorial = 1 * 2 * 3... */
        }

        /* Depois de calcular o fatorial do elemento do vetor1, o vetor2 recebe o valor do fatorial */
        vetor2[i] = fatorial; 

    }

    printf("\nVetor preenchido!\n");

}


void printVetor(int vetor[], int ab) {
    
    printf("\nVetor %d: ", ab);

    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d. ", vetor[i]); // Põe um ponto final no último índice
        } else {
            printf("%d, ", vetor[i]); // Informa passagem com vírgula
        }
        
    }
}

int main (void) {

    int vet1[5], vet2[5];
    int a = 1;
    int b = 2;

    writeVetor(vet1);
    fatorialVetor(vet1, vet2);

    printVetor(vet1, a);
    printVetor(vet2, b);

    return 0;

}