#include <stdio.h> 

int main() {
	int n, x, cont;
	scanf ("%i %i", &n, &x);
	printf ("\n");
	for (cont=1 ;  cont <= n ; cont++){
		if (cont % x == 0){
		printf("%i é múltiplo de %i\n", cont, x);
		} else {
		printf ("%i\n", cont);
		} 
	}
	return 0;
}

