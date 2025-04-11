/* Questão 1 - Lista IV */

#include <stdio.h>

int main () {

    int unit;

    printf("\n\n");

    printf("Quantas macas voce deseja? ");
    scanf("%d", &unit);
    

    if (unit < 12) {
        printf("Preco da compra: %.2f", unit * 1.3);
    } else {
        printf("Preco da compra: %.2f", unit * 1.1);
    }

    return 0;
}