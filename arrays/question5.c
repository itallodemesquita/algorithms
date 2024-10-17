// I. Declare dois vetores

#include <stdio.h>

int main () {
    int i, cont = 1;
    float a[5], b[5];
    for (i = 0; i <= 4; i++){
        printf("Digite o %dº número: ", cont);
        scanf("%d", &a[i]);
        if (i == 0){
            b[i] = a[i];
        }
        if (i % 2 == 0){
            b[i] = (a[i] * 5);
        }
        else{
            b[i] = (a[i] + 5);
        }
        cont++;
        }
    
    printf("O maior número digitado foi isso.");
    
    return 0;
}
