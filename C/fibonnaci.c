#include <stdio.h>

int main(){

	int i, n;
	scanf ("%d", &n);
	long long int a=1, b=1, atual;
	printf ("1:1\n2:1\n");
	for (i=3;i<=n;i++){
		atual=a+b;
		printf ("%d:%lld\n", i, atual);
		
		a=b;
		
		b=atual;
	}

return 0;
}
