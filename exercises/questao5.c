// I. Leia dois valores
// II. Leia qual operação se deseja utilizar
// III. Mostre o valor da operação

#include <stdio.h>

#include <stdio.h>
int main(void) {
    
    float a, b, ab;
    int sinal;
    
    printf("*****CALCULADORA*****\n\n");
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("\n");
    printf("Qual operação você deseja utilizar?\n");
    printf("*Digite \'1\' para \"a + b\"*\n");
    printf("*Digite \'2\' para \"a - b\"*\n");
    printf("*Digite \'3\' para \"a * b\"*\n");
    printf("*Digite \'4\' para \"a / b\"*\n");
    scanf("%d", &sinal);
   
    switch(sinal){
        case 1:
            ab = a + b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        case 2:
            ab = a - b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        case 3:
            ab = a * b;
            printf("O resultado da operação é igual a %.1f", ab);
            break;
        case 4:
            ab = a / b;
            printf("O resultado da operação é igual a %.4f", ab);
            break;
        default:
            printf("Opção inválida.");
    }
    
    return 0;
}
            printf("Opção inválida.");
    }
    
    return 0;
}
