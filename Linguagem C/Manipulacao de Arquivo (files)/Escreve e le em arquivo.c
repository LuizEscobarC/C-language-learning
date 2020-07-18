#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	FILE *arquivo;
	char palavra[101];
	int i;
	//abre o arquivo em modo escrita
	arquivo = fopen("anotações.txt", "w");
	//verifica se o arquivo abriu corretamente
	if (arquivo == NULL)
		printf("Erro, o arquivo não foi aberto!!!\n");
	else{
		//percorre o arquivo escrevendo e pulando linha 10 vezes
		for (i = 0; i < MAX; i++)
		{
			printf("Digite a primeira tarefa: \n");
			gets(palavra);
			fflush(stdin);
			fprintf(arquivo,"%s\n",palavra);
		}	
	}
	fclose(arquivo);
	
	//reabrir o arquivo no modo leitura
	i = 1;
	arquivo = fopen("anotações.txt","r");
	if (arquivo == NULL)
		printf("Erro ao abrir o arquivo!!!\n");
	else 
	{
		//vai ler enquanto o arquivo n chegar ao final pulando linhas
		while(!feof(arquivo))
		{
			fgets(palavra, 101, arquivo);
			//função para verificar se a linha esta sendo lida ou não
			if (ferror(arquivo))
				printf("erro ao ler o arquivo!!\n");
			else
				printf("%d - %s\n",i, palavra);
				i++;
			system("pause");		
		}
	}
	fclose(arquivo);		 			
}