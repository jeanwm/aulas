#include <stdio.h>

int main () {
	
	int x;
	double soma;
	printf ("Digite a quantidade de termos: ");
	scanf ("%i", &x);
	double k, num = 0;
	
	for(k=1; k <= x; k++){
		soma += num + (1/k);
	}
	
	printf ("O somatório com base em %i é: %.6lf\n", x, soma);

	return 0;
}
