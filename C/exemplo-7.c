#include <stdio.h> 

int main() {
	int x, y, z;
	scanf("%i %i %i", &x, &y, &z);
	
	if(x<=0 || y<=0 || z<=0){
		printf("Não há triângulos com medidas iguais ou menores a zero!\n");
	}
	else {
		if(x==y && x==z){
			printf("Equilátero!\n");
		} 
		else {
			if(x==y || x==z || y==z) {
				printf("Isóceles!\n");
			}	
			else {
				printf("Escaleno!\n");
			}
		}
	}
	return 0;
}

