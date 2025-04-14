/* Questão 2 - Lista VII */

#include <stdio.h>

int main () {

    int i, soma = 0;

    for (i = 2; i <= 500; i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        }
    }

    printf("Soma dos pares de 1 a 500: %d", soma);

    return 0;
}