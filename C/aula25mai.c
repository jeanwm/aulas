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

	printf("%i tem %i divisores\n", x, cont);
	return 0;
}
