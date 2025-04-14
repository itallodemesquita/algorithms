/* Questão 1 - Lista VII */

#include <stdio.h>
#include <windows.h>
#include <time.h>

int main () {

    int i;

    printf("Contagem decrescente\n\n");

    for (i = 500; i >= 0; i--) {

        printf("%d\n", i);
        Sleep(1000);

    }

    return 0;
}