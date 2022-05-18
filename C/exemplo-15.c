#include <stdio.h> 

int main() {
	int soma = 0, n, cont, somatoria = 0;
	float media;
	
	scanf("%i", &n);
	
	for (cont=1 ;  cont <= n ; cont++){
		soma += cont;
		somatoria += cont*cont;
	}
	
	media = soma / n;
	
	printf("a soma é %i\n", soma);
	printf("a somatoria é %i\n", somatoria);
	printf("a media é %f\n", media);
	return 0;
}

