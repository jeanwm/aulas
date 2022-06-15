#include <stdio.h>
#define N 8 

//SELECTION SORT
int main () {
	int v[N], i, i_menor;
	
	for (i = 0; i < N; i++) {
		v[i] = rand() % 1000 + 1;
		printf ("%d: %d\n", i, v[i]);
	}
	
	for (i = 0; i < N - 1; i++) {
		int i_menor = i, j;
		
		for (j = i + 1; j < N; j++) {
			if (v[j] < v[i_menor]) {
				i_menor = j;
			}
		}
		
		int temp = v[i];
		v[i] = v[i_menor];
		v[i_menor] = temp;
		
		printf("Pivô em %d: ", i);
		for (j = 0; j < N; j++) {
			printf(" %d", v[j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < N; i++) {
		printf("menor: %d %d\n", i, v[i]);
	}
	
	return 0;
}
