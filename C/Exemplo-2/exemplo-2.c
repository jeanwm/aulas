#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
	
	printf("Digite um caracter ");
	scanf("%c", &x);
	
	printf("Voce digitou o caracter '%c'\n", x);
	printf("Codigo ASCII do caracter '%i'\n", x);
	
	//Dualidade do char x int
	
	int cod;
	
	printf("Digite um numero ");
	scanf("%i", &cod);
	
	printf("Voce digitou o numero '%i'", cod);
	return 0;
}
