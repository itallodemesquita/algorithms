// I. Leia a idade de 10 pessoas
// II. Devolva quantas são maiores de 18 anos

#include <stdio.h>
int main(void) {
    
    int x = 1, idade, maioridade = 0;
    
    do{
        printf("Qual a sua idade? ");
        scanf("%d", &idade);
        if (idade > 18){
            maioridade = maioridade + 1;
        }
        x++;
    }while (x <= 10);
    
    printf("%d pessoas entrevistadas possuem mais de 18 anos.", maioridade);
    
    return 0;
    
}
