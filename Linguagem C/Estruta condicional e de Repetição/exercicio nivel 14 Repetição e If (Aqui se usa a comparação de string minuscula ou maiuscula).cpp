#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
int main()
{
//utilizando um set de linguagem, nesse caso em portugues
	setlocale(LC_ALL,"portuguese");
//aqui eu já declaro as variáveis com valor
	char nome_comodo[30];
	float largura, comprimento, Areacomodo = 0 , Areatotal = 0;
		
	printf("Digite o nome do comodo:");
/*nessa parte eu utilizei o espaço antes do
formatador %s para o compilador entender
que não é pra ler enter do buffer stdin*/
	scanf(" %s", nome_comodo);
	//pode dar erro se o nome comodo for digitado SiM OU sIm OU sIM OU Sim OU SIm.
	//existe uma função na string.h que pega a variavel e retorna maiusculo.
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
	 printf("\n\nA area total da casa é %.2f\n\n", Areatotal);
	 return(0);
}

