#include <stdio.h>

float retangleVolume(float *largura, float *comprimento, float *altura)
{
    return (*largura) * (*comprimento) * (*altura);
}

int main (void)
{
    float largura, comprimento, altura;
    char x;

    while (1)
    {
        printf("\n\nDigite a largura do retângulo: ");
        scanf("%f", &largura);
        printf("\nDigite o comprimento do retângulo: ");
        scanf("%f", &comprimento);
        printf("\nDigite a altura do retângulo: ");
        scanf("%f", &altura);

        if (largura <= 0 || comprimento <= 0 || altura <= 0)
        {
            printf("Os valores não podem ser menores ou iguais a zero!\n");
            break;
        }

        retangleVolume(&largura, &comprimento, &altura);

        printf("\nO volume do retângulo é: %.2f\n\n", retangleVolume(&largura, &comprimento, &altura));
        
        printf("Deseja fazer de novo? (s/n): ");
        scanf(" %c", &x);

        if (x == 'n')
        {
            break;
        }
    }
}