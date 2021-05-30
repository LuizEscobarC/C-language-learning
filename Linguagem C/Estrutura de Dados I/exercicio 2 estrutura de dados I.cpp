#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct estrutura {
	int id;
	char cores[15];
};

int main() {
	int *ptr;
	char *ptr_c, *ptr_s;	
	struct estrutura lapis[3];

	for (int i = 0; i < 3; i++) {
		lapis[i].id = i+1;
		if ( i == 0 ) {
			strcpy(lapis[i].cores, "vermelho");
		} else if ( i == 1 ) {
			strcpy(lapis[i].cores, "amarelo");
		} else {
			strcpy(lapis[i].cores, "verde");
		}
	}
	
	for (int i = 0; i < 3; i++) {
		ptr = &lapis[i].id;
		printf("Valor de id %d = %d   -   ", i ,*ptr);
		ptr_s = lapis[i].cores;
		
		//aqui irei imprimir endereço por endereço
		printf("Cor: ");
		for (int j = 0; j < strlen(ptr_s); j++ ) {
			ptr_c = &lapis[i].cores[j];
			printf("%c", *ptr_c);
		}
		printf("\n");
	}
	
	system("Pause");
	return(0);
}
