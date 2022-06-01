#include <stdio.h>
#include <math.h>

int main (){
	int n, k;
	scanf ("%d %d", &n, &k);
	int cont=0;
	while (cont<n){
		float r = sqrt(k);
		int eh_primo=1, i;
		for (i=2;i<=r && eh_primo; i++){
			if (k % i==0)
				eh_primo=0;
		}
		if (eh_primo){
			cont++;
			printf ("%d:%d\n", cont, k);
		}
		k++;	
	}
return 0;
}
