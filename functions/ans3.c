/* Questão 3 - Lista VIII */

#include <stdio.h>

void verificador (int *n) {
    if (*n % 2 == 0) {
        printf("O valor eh par.\n\n");
    } else {
        printf("O valor eh impar.\n\n");
    }
}