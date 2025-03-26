#include <stdio.h>
#include <locale.h>

void multiploCinco (int *num) {

    if (*num % 5 == 0) {
        printf("O número %d é múltiplo de 5!\n", *num);
    } else {
        printf("O número %d não é múltiplo de 5!\n", *num);
    }
}

int main (void) {

    setlocale(LC_ALL, "");
    int num;
    char x;

    while (1) {

        printf("Digite um número: ");
        scanf("%d", &num);

        multiploCinco(&num);

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &x);

        if (x == 'n') {
            printf("Programa encerrado!\n");
            break;
        }
    }

}