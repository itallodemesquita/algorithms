/* Questão 5 - Lista VI */

#include <stdio.h>

int main () {

    int option = 0, unit = 0;

    printf("******* LANCHONETE COMA BEM *******\n");


    while (option != 100 && 101 && 102 && 103 && 104) {

        
        printf("******* CARDAPIO *******\n\n");

        printf("CODIGO | DESCRICAO       | PRECO\n");
        printf("100    | CACHORRO QUENTE | 10,00\n");
        printf("101    | BAURU           | 12,00\n");
        printf("102    | X-SALADA        | 15,00\n");
        printf("103    | HAMBURGUER      | 18,00\n");
        printf("104    | REFRI (LATA)    | 5,00\n\n");

        printf("O que deseja pedir?\n");
        printf("[Digite o codigo]: ");
        scanf("%d", &option);

        printf("\n");

        if (option < 100) {
            printf("Opcao invalida! Tente novamente!\n");
        } else if (option > 104) {
            printf("Opcao invalida! Tente novamente!\n");
        } else {
            printf("Produto escolhido: %d\n", option);
            break;
        }
        
    }

    while (unit <= 0) {

        printf("Quantas unidades? ");
        scanf("%d", &unit);

        if (unit <= 0) {
            printf("Essa quantidade nao eh permitida, tente de novo!\n");
        }
    }


    if (option == 100) {
        printf("Valor total do pedido: %.2f", unit * 10.00);
    } else if (option == 101) {
        printf("Valor total do pedido: %.2f", unit * 12.00);
    } else if (option == 102) {
        printf("Valor total do pedido: %.2f", unit * 15.00);
    } else if (option == 103) {
        printf("Valor total do pedido: %.2f", unit * 18.00);
    } else if (option == 104) {
        printf("Valor total do pedido: %.2f", unit * 5.00);
    }

    printf("\n\nVolte sempre!");

    return 0;
}