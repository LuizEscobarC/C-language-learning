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
		case 1: printf("Hoje � domingo: \n");
		break;
		case 2: printf("Hoje � segunda: \n");
		break;
		case 3: printf("hoje � ter�a: \n"  );
		break;
		case 4: printf("hoje � quarta: \n" );
		break;
		case 5: printf("hoje � quinta: \n" );
		break;
		case 6: printf("hoje � sexta: \n"  );
		break;
		case 7: printf("hoje � sabado: \n" );
		break;
		default: printf("numero  inv�lido: \n");
		break;
	}
	system("pause");
}
