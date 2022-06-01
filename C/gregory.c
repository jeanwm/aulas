#include <stdio.h>

int main (){
	long long int n;
	double resultado = 0;
	scanf ("%lli", &n);
	long long int cont = 0, i = 1;
	
	for(cont = 1; cont <= n; cont++){
		double termo = 4.0 / i;
		//printf("cont: %d, i: %d,termo:%.15lf\n", cont, i, termo);
		if (cont % 2 == 0){
			resultado -= termo;
		} else {
			resultado += termo;
		}
		
		i += 2;
	}
	
	printf("o resultado é %.15lf\n", resultado);

	return 0;
}
