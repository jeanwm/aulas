#include <stdio.h>

int main () {
	int x, cont = 0;
	
	printf("Digite o 1º valor: ");
	scanf("%i", &x);
	
	int maior = x;
	
	while (x != 0) {
		cont++;
		
		if (x > maior) {
			maior = x;
		}
		
		printf("Digite o %iº valor: ", cont + 1);
		scanf("%i", &x);
	}
	
	if (cont == 0) {
		printf("Nenhum valor foi inserido!\n");
	} 
	else { 
		printf("O maior valor é: %i\n", maior);
	}

	return 0;
}
