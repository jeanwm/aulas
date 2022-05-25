#include <stdio.h>

int main (){
	int x,n, cont_p;
	printf("Digite um número: ");
	scanf("%i", &n);
	
	for (x = 1; x<= n ; x++){
		int i, cont = 0;
		for(i = 1; i <= x; i++){
			if(x % i == 0){
				cont++;	
			}	
		}
			if(cont == 2) {
				cont_p++;
				printf("%i\n", x);
			}
		}	
	return 0;
}
