/* Questão 4 - Lista VIII */

#include <stdio.h>
#include <locale.h>

void maioridade (int *idade) {

    if (*idade >= 18) {
        printf("Você é maior de idade!\n");
    } else {
        printf("Você é menor de idade!\n");
    }
}

int main () {

    setlocale(LC_ALL, "Portuguese");

    int idade;
    char x;

    while (1) {
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    maioridade(&idade);

    printf("Deseja continuar? (s/n): ");
    scanf(" %c", &x);

    if (x == 'n') {
        printf("Programa encerrado!\n");
        break;
    }

    }
    return 0;


}