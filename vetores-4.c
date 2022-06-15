#include <stdio.h>
#define N 8 
int main () {

	int v[N], i;
	for (i=0;i<N;i++){
		v[i] = rand();
		printf ("%d\n", v[i]);
	}
	int menor = v[0];
	int i_menor = 0;
	for (i=1; i<N; i++){
		if (v[i] < menor){
			menor = v[i];
			i_menor = i;
		}
	}
	
	printf("menor: %d %d\n", menor, i_menor);
	return 0;
}
