#include <stdio.h> 

int main() {
	char nome[20]; //também conhecida como string
	char sexo;
	
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Digite o sexo (f/m/o): ");
	scanf(" %c", &sexo); //se usar "%c", ele considera o enter (da quebra de linha anterior) como um char para a variável sexo. Para resolver isso, usar " %c" (é literalmente um ).
	
	switch(sexo){
		case 'f':
			printf("Ilma. Sra. %s\n", nome);
			break;
		case 'm':
			printf("Ilmo. Sr. %s\n", nome);
			break;
		case 'o':
			printf("Ilm. Sr. %s\n", nome);
			break;	
		default:
			printf("Erro.\n");
	}
	return 0;
}

