#include <stdio.h>
#include <stdlib.h>
struct livro
{
	char titulo  [51];
	char autor   [31];
	char editora [31];
	int edicao, ano;
	
};
int main()
{
	struct livro biblioteca[20];
	int i;
	for (i = 0; i < 20; i++)
	{
		printf("Digite o titulo do livro %d: \n",i+1);
		scanf(" %50[^\n]s", biblioteca[i].titulo);
		printf("Digite o autor do livro %d: \n",i+1);
		scanf(" %30[^\n]s",biblioteca[i].autor);
		printf("Digite o nome da editora: \n");
		scanf(" %30[^\n]s", biblioteca[i].editora);
		printf("Digite a N da edição do livro %d: \n",i+1);
		scanf("%d", &biblioteca[i].edicao);
		printf("Digite o ano do livro %d: \n",i+1);
		scanf("%d", &biblioteca[i].ano);
		system("cls");
	}
	for (i = 0; i < 20; i++)
	{
		printf("\tLivro %d\n", i+1);
		printf("O titulo do livro           --> %s\n", biblioteca[i].titulo);
		printf("O autor do livro            --> %s\n",biblioteca[i].autor  );
		printf("A editora do livro          --> %s\n",biblioteca[i].editora);
		printf("O numero de edição do livro --> %d\n",biblioteca[i].edicao );
		printf("O ano do livro              --> %d\n",biblioteca[i].ano    );
		printf("\n");
	}
}
