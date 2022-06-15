#include <stdio.h>

int main () {
	int v[8];
	int i;

	for (i = 0; i < 8; i++) {
		scanf("%d", &v[i]);
	}

	for (i = 0; i < 8; i++) { 
		printf("%d: %d\n", i, v[i]);
	}

	return 0;
}
