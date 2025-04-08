#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeMatrice (float mtrzA[4][2], char ab) {

    printf("\nPreenchendo matriz %c...\n", ab);
    
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {

            printf("Digite o numero da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &mtrzA[i][j]);
        }
    }

    printf("\nMatriz preenchida!\n");

}

void invertMatrice (float mtrzA[4][2], float mtrzB[4][2], char ab) {

    printf("\nPreenchendo matriz %c...\n", ab);
    
    int i, j, ii = 0, jj = 0;

    for (i = 3; i >= 0; i--) { // Acessa a primeira matriz de traz pra frente
        for (j = 1; j >= 0; j--) {

            mtrzB[ii][jj] = mtrzA[i][j];
            jj++;

            if (jj == 2) { // Quando o loop acessar a última linha, ...
                jj = 0; // ... volta para o início e...
                ii++; // ...passa para a próxima linha
            }
        }
    }

    printf("\nMatriz preenchida!\n");

}

void printMatrice (float matriz[4][2], char ab) {

    int i, j;
    
    printf("\nValores da matriz %c: \n", ab);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {

            printf("Valor da posicao [%d][%d]: %f\n", i + 1, j + 1, matriz[i][j]);
        }
    }
}

int main (void) {

    float matA[4][2], matB[4][2];
    char a = 'A', b = 'B';

    writeMatrice(matA, a);
    invertMatrice(matA, matB, b);

    printMatrice(matA, a);
    printMatrice(matB, b);

    return 0;

}