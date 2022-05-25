#include <stdio.h>

int main (){
	int x, a, b, cont_p = 0;
	scanf("%d %d", &a, &b);
	
	for (x = a; x<= b ; x++){
		int i, cont = 0;
		for(i = 1; i <= x; i++){
			if(x % i == 0){
				cont++;	
			}	
		}
			if(cont == 2) {
				cont_p++;
				printf("%d:%d\n", cont_p, x);
			}
		}	
	return 0;
}
