#include <stdio.h>

void writeVetor(char vetor[]) {

    int i = 0;

    printf("Digite seu nome completo: ");
    gets(vetor);

    while (vetor[i] != '\0') { /* Enquanto o loop não encontrar o último caractere, a contagem continua */
        i++;
    }

    printf("\nOlá, %s! O seu nome tem %d caracteres!", vetor, i);
}

int main (void) {

    char name[70];

    writeVetor(name);

    return 0;

}