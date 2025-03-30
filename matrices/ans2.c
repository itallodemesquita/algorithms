#include <stdio.h>
#include <string.h>

void writeMatrice (int matriz[2][3], char ab) {

    printf("\nPreenchendo matriz %c...\n", ab);
    
    int i, j;

    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {

            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz preenchida!\n");

}

int somaMatriz (int matriz[2][3]) {

    int i, j, soma = 0;

    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {

            soma = soma + matriz[i][j];
        }
    }

    return soma;

}

int main (void) {

    int matA[2][3];
    int matB[2][3];
    char a = 'a';
    char b = 'b';

    writeMatrice(matA, a);
    writeMatrice(matB, b);

    printf("Soma da matriz %c: %d\n", a, somaMatriz(matA));
    printf("Soma da matriz %c: %d\n", b, somaMatriz(matB));

    return 0;

}