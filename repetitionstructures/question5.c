// I. Leia três notas e calcule sua média aritmética;
// II. Exibir a média e informar o conceito;
// II. Repita 10 vezes.

#include <stdio.h>
int main (){

    float n1, n2, n3, media;
    int x = 1;
    char conceito;

    printf("CALCULADORA DE NOTAS\n\n");
    
    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);
        
        media = (n1 + n2 + n3) / 3;
        
        if (media >= 9){
            conceito = 'A';
            printf("Média: %.1f | Conceito: %c\n\n", media, conceito);
        }
        if (media >= 7 && media < 9){
            conceito = 'B';
            printf("Média: %.1f | Conceito: %c\n\n", media, conceito);
        }
        if (media >= 6 && media < 7){
            conceito = 'C';
            printf("Média: %.1f | Conceito: %c\n\n", media, conceito);
        }
        if (media >= 4 && media < 6){
            conceito = 'D';
            printf("Média: %.1f | Conceito: %c\n\n", media, conceito);
        }
        if (media < 4){
            conceito = 'E';
            printf("Média: %.1f | Conceito: %c\n\n", media, conceito);
        }
        
        x++;
        
    }while(x <= 10);

	return 0;
	}
