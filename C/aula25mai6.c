#include <stdio.h>
#include <math.h>

int main (){
	int x, a, b, cont_p = 0;
	scanf("%d %d", &a, &b);
	
	for (x = a; x<= b ; x++){
		int i, cont = 0, e_primo = 1;
		float r = sqrt(x);
		for(i = 2; i <= r && e_primo; i++){
			if(x % i == 0){
				e_primo = 0;
			}	
		}
			if(e_primo == 1) {
				cont_p++;
				printf("%d:%d\n", cont_p, x);
			}
		}	
	return 0;
}
