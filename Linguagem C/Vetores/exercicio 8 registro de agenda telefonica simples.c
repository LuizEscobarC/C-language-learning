#include <stdio.h>
#include <stdlib.h>
struct pessoa
{
	char nome[51],email[51];
	int telefone;
};
int main()
{
	int i;
	struct pessoa agenda[30];
	//cadastro
	for (i = 0; i < 30; i++)
	{
		printf("Digite o nome da pessoa %d : \n", i+1);
		scanf(" %50[^\n]s", agenda[i].nome);
		printf("Digite o email dessa pessoa: \n"     );
		scanf(" %50[^\n]s", agenda[i].email);
		printf("Digite o telefone dessa pessoa somente em numeros! : \n");
		scanf("%d", &agenda[i].telefone   );
		system("cls");
	}
	//imprime
	for (i = 0; i < 30; i++)
	{
		printf("\t Pessoa %d \n",i+1);
		printf("O nome da pessoa       --> %s\n", agenda[i].nome);
		printf("O email dessa pessoa   --> %s\n",agenda[i].email);
		printf("Digite o telefone      --> %d\n",agenda[i].telefone);
		printf("\n");
		
	}
	system("pause");
}
