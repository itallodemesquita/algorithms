/* Questão 3 - Lista VI */

#include <stdio.h>

int main () {

    int num, den;

    printf("\n\n");
    printf("****Calculadora de divisao****");
    printf("\n\n");

    printf("Digite o numero que sera dividido: ");
    scanf("%d", &num);

    printf("Digite o numero que dividira o primeiro: ");
    scanf("%d", &den);


    if (den == 0) {
        printf("Nao eh possivel realizar essa divisao.");
        return 0;
    } else if ((num % den) == 0) {
        printf("A operacao eh divisivel!");
    } else {
        printf("A operacao nao eh divisivel!");
    }

    return 0;
}