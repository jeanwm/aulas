#include <stdio.h>
#include <stdlib.h>

int main (){

	int i, v[10];

	for(i=0; i<1000000000; i++) {
		v[i] = rand();
		printf("v[%d]: %d\n", i, v[i]);
	}
	return 0;
}
