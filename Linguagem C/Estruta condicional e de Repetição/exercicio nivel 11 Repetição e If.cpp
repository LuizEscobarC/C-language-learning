#include <stdio.h>
#include <stdlib.h>
int main()
{
	char frase [100];
	int cont, qtd_imprimir;
	printf("Digite a frase que deseja imprimir de no maximo 100 caracteres: \n");
	gets(frase);
	printf("Agora quantas vezes deseja imprimir na tela?\n");
	scanf("%d", &qtd_imprimir);
	
	for (cont = 1; cont <= qtd_imprimir; cont++)
	{
		printf("%d %s\n",cont,frase);
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\n\nE VOCE OTARIO FICOU VENDO ATE O FINAL KKKKKKKJJJJ peguei sua irma kkk\n\n");
	printf("\n\n\n\n\n\n");
	return(0);
}
