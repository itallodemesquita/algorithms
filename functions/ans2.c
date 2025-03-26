/* Questão 2 - Lista VIII */

#include <stdio.h>

void verificador (int *n) {
    if (*n > 0) {
        printf("O valor eh positivo.\n\n");
    } else if (*n < 0) {
        printf("O valor eh negativo.\n\n");
    } else {
        printf("O valor eh igual a zero.\n\n");
    }
}

int main () {

    int n;
    char x;

    while (1) {

    printf("\nDigite um valor: ");
    scanf("%d", &n);
    verificador(&n);

    printf("Deseja continuar? (s/n) ");
    scanf(" %c", &x);
    if (x == 'n') {
        printf("Encerrando...\n\n");
        break;

    }

}

return 0;

}