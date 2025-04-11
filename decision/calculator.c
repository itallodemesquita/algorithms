/* Questão 4 - Lista VI */

#include <stdio.h>

int main () {

    int option = 0;
    float num1, num2;

    printf("\n\n*** MICROCALCULADORA EM C ***\n\n");

    /* O menu é mostrado até uma opção válida ser selecionada */
    while (option != 1 && 2 && 3 && 4) { 

        printf("Qual operacao vc deseja realizar?\n\n");

        printf("[1] Adicao\n");
        printf("[2] Subtracao\n");
        printf("[3] Multiplicacao\n");
        printf("[4] Divisao\n");
        printf("Digite apenas o numero: ");
        scanf("%d", &option);

        if (option > 4) {
            printf("Opcao invalida! Tente novamente.\n\n\n");
        } else if (option <= 0) {
            printf("Opcao invalida! Tente novamente.\n\n\n");
        }
    }


    switch (option) {
    case 1:

        printf("\n\nOPERACAO DE ADICAO\n\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("\nO resultado da operacao eh igual a %f", (num1 + num2));
        break;

    case 2:

        printf("\n\nOPERACAO DE SUBTRACAO\n\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("\nO resultado da operacao eh igual a %f", (num1 - num2));
        break;

    case 3:

        printf("\n\nOPERACAO DE MULTIPLICACAO\n\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("\nO resultado da operacao eh igual a %f", (num1 * num2));
        break;

    case 4:

        printf("\n\nOPERACAO DE DIVISAO\n\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);


        if (num2 == 0) {
            printf("Nao eh possivel realizar a operacao!");
        } else { 
            printf("\nO resultado da operacao eh igual a %f", (num1/num2));
        }
        break;
    
    default:
        break;
    }

    return 0;

}

/* NUNCA DECLAREM UMA VARIAVEL DENTRO DO SWITCH! */