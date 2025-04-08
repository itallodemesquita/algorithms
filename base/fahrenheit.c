/* Questão 4 - Lista V */

#include <stdio.h>

int main () {

    float temp;


    printf("\n\n");

    printf("Qual a temperatura do ambiente (em Celcius)? ");
    scanf("%f", &temp);


    printf("\n\nA temperatura do ambiente (em Fahrenheit) eh %f.", ((temp * 1.8) + 32));


    return 0;
}