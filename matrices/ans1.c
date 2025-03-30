#include <stdio.h>

void writeMatrice (int matriz[3][3]) {

    printf("\nPreenchendo matriz...\n");
    
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {

            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

}

void printInverse (int matriz[3][3]) {

    int i, j;
    
    printf("\nValores da matriz em ordem inversa: \n");

    for (i = 3; i >= 1; i--) {
        for (j = 3; j >= 1; j--) {

            printf("Valor da posicao [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
}

int main (void) {

    int mat[3][3];

    writeMatrice(mat);
    printInverse(mat);

    return 0;
}