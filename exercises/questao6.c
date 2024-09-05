// I. Solicite um número n
// II. Mostre a tabuada do número n

#include <stdio.h>
int main(void) {
    
    int n, x, nx;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    printf("\nTabuada do número %d:\n\n", n);
    for (x=1; x<=10; x++){ // utilizando laço de repetição 'for' para multiplicar n a cada x
        nx = n * x; // a operação se repitirá até que o valor de x chegue a 10
        printf("%d * %d = %d\n", n, x, nx); // mostra o resultado da operação
    }
    
    return 0;
}
