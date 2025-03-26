/* Questão 1 - Lista VIII */

#include <stdio.h>

void igualZero (int *n) {
    if (*n == 0) {
        printf("O valor eh igual a zero.\n\n");
    } else {
        printf("O valor nao eh igual a zero.\n\n");
    }
}

int main () {

    int n;
    char x;

    while (1) {

    printf("\nDigite um valor: ");
    scanf("%d", &n);
    igualZero(&n);

    printf("Deseja continuar? (s/n) ");
    scanf(" %c", &x);
    if (x == 'n') {
        printf("Encerrando...\n\n");
        break;

    }
}

return 0;

}
