// I. Leia 20 valores inteiros
// II. Mostre o menor, o maior e a média dos valores digitados

#include <stdio.h>
int main(void) {
    
    int n, cont = 1, soma, most = -99999, minor = 99999;
    float media;
    do{
        printf("Digite um valor: ");
        scanf("%d", &n);
        soma = soma + n; // a soma de valores deve ser feita dentro do laço de repetição
        if (n > most){
            most = n;
        }
        if (n < minor){
            minor = n;
        }
        cont++;
    }while(cont<=20);
    
    media = soma / cont;
    
    printf("O maior valor digitado foi %d\n", most);
    printf("O menor valor digitado foi %d\n", minor);
    printf("A média dos valores digitados foi de %.2f", media);
    
    return 0;
    
}
