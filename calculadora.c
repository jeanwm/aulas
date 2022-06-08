#include <stdio.h>

int main(void) {
	int x, y, z;
	float a;
	printf ("Calculadora\n");
	
	
	while (z != 5) {
		printf ("\n");
		printf ("Selecione a operação:\n"
				"1. Soma\n"
				"2. Multiplicação\n"
				"3. Divisão\n"
				"4. Subtração\n"
				"5. Sair\n");
		printf ("\n");
		
		scanf ("%i", &z);
		
		if (z==1){
			printf ("Digite dois números: \n");
			scanf ("%i %i", &x, &y);
			a = x + y;
			printf ("%.2f\n", a);
		}
		
		if (z==2){
			printf ("Digite dois números: \n");
			scanf ("%i %i", &x, &y);
			a = x * y;
			printf ("%.2f\n", a);
		}
		
		if (z==3){
			printf ("Digite dois números: \n");
			scanf ("%i %i", &x, &y);
			a = x / y;
			printf ("%.2f\n", a);
		}
		
		if (z==4){
			printf ("Digite dois números: \n");
			scanf ("%i %i", &x, &y);
			a = x - y;	
			printf ("%.2f\n", a);	
		}
		
		if (z==5){
			return 0;	
		}
	}
}
