#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
/////////////
void imprimirLista(Cadastro*);
int  novoCadastro(Cadastro*);

int main()
{
	setlocale(LC_ALL,"portuguese");
	Cadastro	cad;

	novoCadastro(&cad);
	imprimirLista(&cad);
	system("pause");
	return 0;
};
/////////////
void imprimirLista(Cadastro* cad)
{
	int i;
	printf("cadastro tem %d de %d clientes\n\n",
		cad->total, cad->limite);
	for ( i = 0; i < cad->total; i += 1){ // i = i + 1;
		printf("\t-----> %d\n", cad->cl[i].codigo);
		printf("\t%s\n", cad->cl[i].nome);
		printf("\t%d\n", cad->cl[i].telefone);
		printf("\t%s\n", cad->cl[i].email);	
	}
	return;
}
/////////////
int novoCadastro(Cadastro* cad)
{
	Cliente modelo;
	int i, opcao;
	
	printf("Quantos clientes deseja cadastrar?");
	scanf("%d",& opcao);
	for (i=0; i < opcao; i++)
	{
		printf("\ndigite o código: ");
		scanf("%d",&modelo.codigo);
		fflush(stdin);
		printf("\ndigite o nome: ");
		gets(modelo.nome);
		printf("\nDigite o telefone: ");
		scanf("%d",&modelo.telefone);
		printf("\nDigite o email: ");
		fflush(stdin);
		gets(modelo.email);
		cad->cl[i] = modelo;
	}
	cad->total = i;
	cad->limite = 30;
	return 1;
};



