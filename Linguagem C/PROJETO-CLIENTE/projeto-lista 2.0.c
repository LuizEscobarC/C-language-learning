#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int codigo;
	char nome[31];
	int telefone;
	char email[51];
}	Cliente;

typedef struct
{
	int limite;
	int total;


	Cliente	cl[30];
}	Cadastro;

void imprimirLista(Cadastro*);
int  novoCadastro(Cadastro*);

int main()
{
	Cadastro	cad;

	novoCadastro(&cad);
	imprimirLista(&cad);
	system("pause");
	return 0;
}

void imprimirLista(Cadastro* cad)
{
	printf("cadastro tem %d de %d clientes\n\n",
		cad->total, cad->limite);
		
	for (int i = 0; i < cad->total; i += 1)
		printf("%d", cad->cl[i].codigo);
	return;
}

int novoCadastro(Cadastro* cad)
{
	int i;
	
	for (i = 0; i < 4; i++)
	{
		printf("Digite o código do cliente %d\n", i+1);
		scanf("%d",&cad->cl[i].codigo);
		printf("Digite o nome do cliente %d\n", i+1);
		scanf("%d",&cad->cl[i].nome);
		
		cad->total = i+1;
	}
	cad->limite = 30;
	return 4;
};