#include <stdio.h> 

int main() {
	int n;
	
	scanf ("%i", &n);
	int fat = 1; //Acumulador
	for (cont = 1 ; cont <= n ; cont ++){
		fat = fat * cont;
	}
	printf ("O cont de é: %i\n", cont);
	printf ("O n de é: %i\n", n);
	printf ("O fatorial de é: %i\n", fat);
	return 0;
}

