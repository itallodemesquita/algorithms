/* Questão 3 - Lista V */

#include <stdio.h>

int main () {

    int num;

    printf("\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\n\nO antecessor de %d eh %d.\n", num, num - 1);
    printf("O sucessor de %d eh %d.", num, num + 1);

    return 0;
}