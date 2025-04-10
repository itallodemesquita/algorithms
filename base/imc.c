/* Questão 10 - Lista V */

#include <stdio.h>

int main () {

    float peso, altura;

    printf("\n\n");
    printf("******* Calculo de IMC *******");
    printf("\n\n");

    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    printf("Qual o seu peso? ");
    scanf("%f", &peso);

    printf("O seu IMC eh de %.2f.", peso/(altura*altura));

    return 0;
}