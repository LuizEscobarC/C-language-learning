#include <stdio.h>
#include <stdlib.h>

#define TAM 20
// registro do livro
struct livro
{
	int codigo;
	char titulo[50];
	char autor[30];
	char area[30];
	int ano;
	char editora[30];
};
// corpo do programa
int main()
{
	struct livro ficha [TAM]; // declara a variavel do tipo livro
	struct livro troca; // necessário para a troca no método bobblesort	
	int busca, i, j, acha, op;
	
	op = 0;
	while (op != 5)
	{
		//menu
		printf("1 - Cadastrar os livros\n");
		printf("2 - Imprimir os livros cadastrados\n");
		printf("3 - pesquisar livros por código\n");
		printf("4 -  Ordenar os livros por ano\n");
		printf(" 5 - Sair\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &op);
		fflush(stdin);
		//menu
		
		if (op == 1)
		{
			system("cls");
			for (i=0; i<TAM; i++)
			{
				// vai cadastrar no vetor de 0 até 19
				printf("digite o código do livro da posição %d", i+1);
				scanf("%d", &ficha[i].codigo);
				fflush(stdin);
				printf("Digite o título do livro: ");
				scanf("%50[^\n]s", &ficha.titulo);
				fflush(stdin);
				printf("Digite o nome do autor; ");
				scanf("%30[^\n]s", &ficha[i].autor);
				fflush(stdin);
				printf("Digite a area do livro: ");
				scanf("%30[^\n]s", &ficha[i].area);
				printf("Digite o ano do livro: ");
				scanf("%d", &ficha[i].ano);
				fflush(stdin);
				printf("Digite o nome da editora: ");
				scanf("%30[^\n]s", &ficha[i].editora);
				fflush(stdin);
			}
		}
		else
		{
			if (op == 2)
			{
				system("cls");
				for (i = 0; i < TAM; i++)
				{
					//imprime toda lista
					printf("\n Código: %d\n", ficha[i].codigo);
					printf("Titulo : %d\n",ficha[i].titulo);
					printf("Autor: %s\n", ficha[i].autor);
					printf("Area: %s\n\n",ficha[i].area);
					printf("Ano: %d\n",ficha[i].ano);
					printf("Editora: %s\n\n", ficha[i].editora);
				}
			}
			else
			{
				if (op == 3)
				{
					system("cls");
					printf("Digite o código que deseja buscar: ");
					scanf("%d", &busca);
					i = 0;
					acha = 0;
					while ((i < TAM) && (acha == 0))
					{
						//enquanto não achar o contador conta até o final 
						if (ficha[i].codigo == busca)
					    	acha = 1;
					    else
							i++;	
					}
					if (acha == 1)
					{
						//imprime a livro onde o contador parou
						printf("\n Código: %d\n",ficha[i].codigo);
						printf("Titulo: %s\n",ficha[i].titulo);
						printf("Autor: %s\n", ficha[i].autor);
						printf("Area: %s\n", ficha[i].area);
						printf("Ano: %d\n", & ficha[i].ano);
						printf("Editora: %s\n\n",ficha[i].editora);
					}
					else
						printf("\n Registro não encontrado");
				}
				else
				{
					if (op == 4)
					{
						// bobblesort
						system("cls");
						for (i = 0; i< TAM - 1;i++)
						{
							for (j = i+1;j < TAM; j++)
							{
								if (ficha[i].ano > ficha[j].ano)
								{
									troca = ficha[i];
									ficha[i] = ficha[j];
									ficha[j] = troca;	
								}	
							}							
						}
						for (i = 0; i < TAM; i++)
						{
							printf("\n CÓDIGO: %d, TITULO: %s, ANO: %d\n\n", ficha[i].codigo, ficha[i].titulo,ficha[i].ano);
						}
					}
				}
			}
		}
	}
	return(0);
}
