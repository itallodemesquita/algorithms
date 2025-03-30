#include <stdio.h>
#include <string.h>

void writeBoletim (char matnome[5][20], float matnota[5][3]) {

    int i, j;

    printf("\n\nPreenchendo boletim...\n\n");

    for (i = 0; i < 5; i++) {
    printf("Escreva o nome do aluno %i: ", i + 1);
    gets(matnome[i]);

        for (j = 0; j < 3; j++) {
        printf("Digite a nota %d: ", j);
        scanf("%f", &matnota[i][j]);
        }

    }

    printf("\n\n");

}

void printBoletim (char matnome[5][20], float matnota[5][3]) {

    int i;
    float media;

    for (i = 0; i < 5; i++) { // Percorre as cinco linhas das duas matrizes

        printf("Nome: %s\n", matnome[i]); // Acessa e mostra o nome 
        
        media = (matnota[i][1] + matnota[i][2] + matnota[i][3]) / 3; // Calcula a média acessando as colunas
        
        printf("Média de %s: %.2f\n\n", matnome[i], media); // Exibe a média

    }

}

int main (void) {

    char nome[5][20];
    float notas[5][3];

    writeBoletim(nome, notas);
    printBoletim(nome, notas);

    return 0;

}