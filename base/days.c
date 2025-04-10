/* Questão 7 - Lista V */

#include <stdio.h>

int main () {

    int idade;

    printf("Qual eh a sua idade (em anos)?: ");
    scanf("%d", &idade);

    printf("Legal! Com %d anos, voce ja viveu pelo menos %d dias em toda a vida!", idade, idade * 365);

    return 0;
}