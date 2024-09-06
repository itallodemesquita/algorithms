// I. Imprima números ímpares entre 100 a 300

#include <stdio.h>
int main(void) {
    
    int cont;
    
    printf("Lista dos números ímpares [100, 300]\n");
    for (cont = 101; cont < 300; cont = cont + 2){
        printf("%d,", cont);
    }
    
    return 0;
    
}
