#include <stdio.h> 
#include <math.h>

int main() {
	float a,b,c;
	printf ("Digite os 3 coeficientes:\n");
	scanf ("%f %f %f",&a,&b,&c);
	if (a==0){
		printf ("Não é equação do segundo grau\n");
	}
	else{
		float delta = b*b-4*a*c;

		if (delta<0){
			printf ("Não há raizes reais\n");
		}
		else{
			float x1 = (-b + sqrt(delta))/(2*a);
			float x2 = (-b - sqrt(delta))/(2*a);
			printf ("As raízes da equação são:\n");
			printf ("x1=%.2f e x2=%.2f\n", x1, x2);
		}
	}
	return 0;
}

