/* Questão 9 - Lista V */

#include <stdio.h>

int main () {

    float comprimento, largura, altura;

    printf("\nMEDIDOR DE VOLUMES\n\n");

    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    printf("\n\n");
    printf("O volume do retangulo eh de %.1f unidades cubicas.", (comprimento * altura * largura));

    return 0;
}