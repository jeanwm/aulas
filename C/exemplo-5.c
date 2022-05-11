#include <stdio.h> 

int main() {
	int a, b;
	
	printf("Digite 2 números: \n");
	scanf("%i %i", &a, &b);
	
	/*float media = (a + b)/2;*/

	/* / trata como se fosse divisão inteira (entre ints e floats), depende dos operandos. No caso,  media = (a + b)/2 trata (a + b) e 2 como todos números inteiros*/
	
	float media = (float)(a+b)/2;
	
	/* o (float) atua como um typecasting */
	
	printf("Média = %.2f\n", media);
	
	return 0;
}

