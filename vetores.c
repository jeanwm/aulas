#include <stdio.h>

int main (){

	int v[10];
	int n, i;
	for (i=0; i<10; i++){
		printf("Digite o %dº:\n", i+1);
		scanf("%d", &v[i]);
	}
	printf ("Dados do vetor: \n");
	for(i=0; i<10; i++)
		printf ("%d : %d\n", i, v[i]);
return 0;
}
