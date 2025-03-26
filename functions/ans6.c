#include <stdio.h>

float circleArea(float *raio)
{
    const float PI = 3.14159;
    return PI * (*raio) * (*raio);
}

int main(void)
{

    float raio;
    char x;

    while (1)
    {
        printf("\n\nDigite o raio do círculo: ");
        scanf("%f", &raio);

        if (raio <= 0)
        {
            printf("O raio nao pode ser menor ou igual a zero!\n");
            break;
        }

        circleArea(&raio);

        printf("A área do círculo é: %.2f\n\n", circleArea(&raio));
        printf("Deseja fazer de novo? (s/n): ");
        scanf(" %c", &x);
        if (x == 'n')
        {
            break;
        }

    }
}