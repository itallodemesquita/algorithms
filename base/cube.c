/* Questão 6 - Lista V*/

#include <stdio.h>

int main (void) {

    int num;

    printf("Digite um inteiro: ");
    scanf("%d", &num);

    printf("O cubo de %d eh %d.", num, (num * num * num));

    return 0;
}