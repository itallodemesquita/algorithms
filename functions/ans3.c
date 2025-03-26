/* Questão 3 - Lista VIII */

#include <stdio.h>

void verificador(int *n)
{
    if (*n % 2 == 0)
    {
        printf("O valor eh par.\n\n");
    }
    else
    {
        printf("O valor eh impar.\n\n");
    }
}

int main(void)
{

    int num;
    char x;

    while (1)
    {

        printf("\nDigite um valor: ");
        scanf("%d", &num);

        verificador(&num);

        printf("Deseja continuar? (s/n) ");
        scanf(" %c", &x);
        if (x == 'n')
        {
            printf("Encerrando...\n\n");
        }
    }
}