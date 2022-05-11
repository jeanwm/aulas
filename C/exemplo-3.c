#include <stdio.h> 
#include <stdlib.h>

int main(void) {
	int x = 1;
	int y = 0;
	
	if(x == 0){
		y = 1;
	}
	else {
		y = 2;
	}
	
	printf("%.i", y); 
	return 0;
}
