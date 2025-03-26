#include <stdio.h>

float mediaCalc(float *n1, float *n2, float *n3) {
    if (*n1 < 0 || *n2 < 0 || *n3 < 0) {
        printf("As notas não podem ser negativas!\n");
        return -1;

    } else {
        return (*n1 + *n2 + *n3) / 3;
    }
}

void conceito(float *media) {

    if (*media < 4) {
        printf("Nota: %.2f\n", *media);
        printf("Conceito: E\n");
    }

    if (*media >= 4 && *media < 6) {
        printf("Nota: %.2f\n", *media);
        printf("Conceito: D\n");
    }

    if (*media >= 6 && *media < 7) {
        printf("Nota: %.2f\n", *media);
        printf("Conceito: C\n");
    }
    
    if (*media >= 7 && *media < 9) {
        printf("Nota: %.2f\n", *media);
        printf("Conceito: B\n");
    }

    if (*media >= 9) {
        printf("Nota: %.2f\n", *media);
        printf("Conceito: A\n");
    }

}

int main (void) {

    float n1, n2, n3, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = mediaCalc(&n1, &n2, &n3);
    if (media == -1) {
        return 0;
    }
    
    conceito(&media);

    return 0;
}