/*lê a idade do usuário
informe se ele é maior ou menor de idade.
repita 10 vezes.*/

# include <stdio.h>
int main (){
	int idade, x;
	while (x <= 10){
		
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	if (idade < 18){
		printf("Oh, voce eh menor de idade! \n");
	}
	if(idade >= 18){
		printf("Voce eh maior de idade! \n");	
	}
	x++;
	}
	return 0;
}
