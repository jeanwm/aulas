#include <stdio.h>

int main (){
	int x;
	printf("Digite um número: ");
	scanf("%i", &x);
	
	int i, cont = 0;
	
	for(i = 1; i <= x; i++){
		if(x % i == 0){
			cont++;
		}
	}

	if(cont == 2) {
		printf("%i é primo\n", x);
	} else {
		printf("%i não é primo\n", x);
	}
	
	return 0;
}
