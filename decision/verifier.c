/* Questão 2 - Lista VI */

#include <stdio.h>

int main () {

    int num;

    printf("\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero %d eh negativo!", num);
    } else if (num > 0) {
        printf("O numero %d eh positivo!", num);
    } else {
        printf("O numero eh igual a %d", num);
    }

    return 0;
}