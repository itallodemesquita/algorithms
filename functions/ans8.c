#include <stdio.h>

int fatorialCalc(int *num) {
    int i, fatorial = 1;

    for (i = 1; i <= *num; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int fatorialCalc2 (int *num) { // Modo mais intuitivo de montar o cálculo fatorial

    int i, fatorial = *num;

    for (i = (*num) - 1; i >= 1; i--) { /* i vai multiplicar o número que desejamos calcular o fatorial, por isso ele decrementa até chegar a 1 */

        fatorial = fatorial /* Valor de num */ * i; /* (num - 1) */

    }

    return fatorial;

}

int main (void) {

    int num;
    char x;

    while (1) {
        printf("\nDigite um número para calcular o fatorial (primeira forma): ");
        scanf("%d", &num);

        if (num < 0) {
            printf("O número não pode ser negativo!\n");
            break;
        }

        printf("\nO fatorial de %d é: %d\n", num, fatorialCalc(&num));

        printf("\nDigite um número para calcular o fatorial (segunda forma): ");
        scanf("%d", &num);

        if (num < 0) {
            printf("O número não pode ser negativo!\n");
            break;
        }

        printf("\nO fatorial de %d é: %d\n", num, fatorialCalc2(&num));

        printf("Deseja fazer de novo? (s/n): ");
        scanf(" %c", &x);

        if (x == 'n') {
            break;
        }
    }

}