#include <stdio.h>

int main(){
	float x;
	int n, i, j;
	
	printf("Informe x e a quantidade de termos n: ");
	scanf("%f%d", &x, &n);
	double e_x = 0;
	
	for(i = 0; i <= n; i++) {
		double termo = 1;
		
		for(j = 1; j <= i; j++) {
			termo = termo * x /j;
		}
		e_x = e_x + termo;
	}
	printf("e elevado a %.3f = %lf\n", x, e_x);
	 
	return 0;
}
