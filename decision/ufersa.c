/* Questão 6 - Lista VI */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

    float n1 = -1, n2 = -1, n3 = -1, mp; /* Separando memória para 3 notas e a média parcial */

    while (n1 < 0.00 || n2 < 0.00 || n3 < 0.00 || n1 > 10.00 || n2 > 10.00 || n3 > 10.00) { /* O menu se repete até uma media válida ser calculada*/ 

        printf("\n\n");

        printf("Digite a sua primeira nota: ");
        scanf("%f", &n1);
        if (n1 > 10 || n1 < 0) {
            printf("Nota invalida! Tente novamente.\n\n\n");

        } else {
            printf("Digite a sua segunda nota: ");
            scanf("%f", &n2);
            if (n2 > 10 || n2 < 0) {
                printf("Nota invalida! Tente novamente.\n\n\n");

            } else {
                printf("Digite a sua terceira nota: ");
                scanf("%f", &n3);
                if (n3 > 10 || n3 < 0) {
                    printf("Nota invalida! Tente novamente.\n\n\n");
                } else {
                    printf("Notas coletadas!\n\n");
                }
            }
        }
    }

    mp = (n1 + n2 + n3) / 3; /* Declaração da média parcial */

    if (mp >= 7) {
        
        printf("Media parcial: %.2f\n", mp);
        printf("Situacao final: APROVADO");

    } else if (mp < 7.00 || mp >= 3.50) {

        printf("Media parcial: %.2f\n", mp);
        printf("Situacao final: PROVA FINAL\n\n");

        float n4; /* Nota da 4a prova */

        printf("Digite a nota da avaliacao final: ");
        scanf("%f", &n4);

        float mf = ((6 * mp) + (4 * n4)) / 10; /* Declaracao da media final*/

        if (mf >= 5.00) {
            printf("\n\n");
            printf("Media final: %.2f\n", mf);
            printf("Situacao final: APROVADO");
            
        } else {
            printf("\n\n");
            printf("Media final: %.2f\n", mf);
            printf("Situacao final: REPROVADO");
        }
    }

    return 0;
}

/* POSSIVEL MELHORA: TREINAR LOGICA BOOLEANA */