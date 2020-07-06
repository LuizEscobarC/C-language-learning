#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Digite um numero de 1 a 7 : \n");
	printf("1 - sunday\n"   );
	printf("2 - monday\n"   );
	printf("3 - tuesday\n"  );
	printf("4 - wednesday\n");
	printf("5 - thursday\n" );
	printf("6 - friday\n"   );
	printf("7 - saturday\n" );
	scanf(" %d", &n);
	switch(n){
		case 1: printf("Hoje é domingo: \n");
		break;
		case 2: printf("Hoje é segunda: \n");
		break;
		case 3: printf("hoje é terça: \n"  );
		break;
		case 4: printf("hoje é quarta: \n" );
		break;
		case 5: printf("hoje é quinta: \n" );
		break;
		case 6: printf("hoje é sexta: \n"  );
		break;
		case 7: printf("hoje é sabado: \n" );
		break;
		default: printf("numero  inválido: \n");
		break;
	}
	system("pause");
}
