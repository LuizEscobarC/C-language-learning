#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
int main()
{
	//nivel 2
	setlocale(LC_ALL,"portuguese");
	
	Areacomodo = 0;
	Areatotal = 0;	
	char nome_comodo[30];
	float largura, comprimento, Areacomodo, Areatotal;
	printf("Digite o nome do comodo:");
	scanf(" %s", nome_comodo);
	
	while(strcmp(nome_comodo,"fim") != 0 && strcmp(nome_comodo,"FIM" ) != 0) 
	{
		printf("Digite a largura do comodo: \n");
		scanf("%f", &largura);
		printf("Digite o comprimento do comodo:\n");
		scanf("%f", &comprimento);
		system("cls");
		Areacomodo = largura * comprimento; 
		Areatotal = Areatotal + Areacomodo;
		printf("Digite o nome do comodo... digite FIM para finalizar.\n");
		scanf(" %s", nome_comodo);
	 } 
	 system("cls");
	 printf("\n\nA area total da casa � %.2f\n\n", Areatotal);
	 return(0);
}

