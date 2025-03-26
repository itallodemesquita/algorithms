#include <stdio.h>

int fatorialCalc(int *num) {
    int i, fatorial = 1;

    for (i = 1; i <= *num; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main (void) {

    int num;
    char x;

    while (1) {
        printf("\nDigite um número para calcular o fatorial: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("O número não pode ser negativo!\n");
            break;
        }

        printf("\nO fatorial de %d é: %d\n", num, fatorialCalc(&num));

        printf("Deseja fazer de novo? (s/n): ");
        scanf(" %c", &x);

        if (x == 'n') {
            break;
        }
    }

}