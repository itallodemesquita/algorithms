/* Questão 8 - Lista V */

#include <stdio.h>

int main () {

    float real, cotacao;

    printf("Qual a cotacao do dolar hoje? ");
    scanf("%f", &cotacao);

    printf("Valor (em real) que deseja converter: ");
    scanf("%f", &real);

    printf("%.2f reais = %.2f dolares", real, real/cotacao);

    return 0;
}