// I. Leia dois valores
// II. Leia qual operação se deseja utilizar
#include <stdio.h>

int main(void) {
    float a, b, ab;
    char operador;
    
    printf("*****CALCULATOR*****\n");
    printf("Digite o primeiro valor que você deseja operar: ");
    scanf("%f", &a);
    printf("Digite o segundo valor que você deseja operar: ");
    scanf("%f", &b);
    printf("\n");
    printf("Qual operação você deseja utilizar?\n");
    scanf("%c", &operador);
    printf("Digite \'p\' para \"a + b\"\n");
    printf("Digite \'m\' para \"a - b\"\n");
    printf("Digite \'v\' para \"a * b\"\n");
    printf("Digite \'d\' para \"a / b\"\n");
   
    switch(operador){
        case 'p':
            ab = a + b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        case 'm':
            ab = a - b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        case 'v':
            ab = a * b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        case 'd':
            ab = a / b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        default:
            printf("Opção inválida.");
    }
    
    return 0;
}
