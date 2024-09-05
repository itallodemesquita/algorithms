# include <stdio.h>

//* fatore um numero n *//

int main (){
	int n, fat = 0, somafat, x;
	
	printf("digite ai um numero");
	scanf("%d", &n);
	
	if (n == 0 || n == 1) {
		fat = 1;
		printf("O fatorial de %d é igual a %d", n, fat);
	}
	else{
		for (x=1; x<=n - 1; x++);
		fat = n * x;
		x++;
		printf("O fatorial de %d é igual a %d", n, fat);
	}
	
	return 0;
}
