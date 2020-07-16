#include <stdio.h>

#define max 10

int main()
{
	char palavra[max];
	int i, j;
	FILE *arq;
	//cria e vincula o arquivo a uma variavel
	char *arq = "texto.txt";
	//abre o arquivo com especificação w : somente escrever 
	arq = fopen ("texto.txt", "w"); 
	//necessário para casos de erros externos
	if (arq == NULL)
		printf ("Arquivo não aberto. Erro\n");
	else
	{
		/*OBS: não será armazenado todas as informações   na  váriavel,
		 mas sim,será usada como um tipo de onibus de strings, ou seja,
		 ela armazena e joga no arquivo*/
		for (i=0; i<max; i++){
			printf("Digite a %dª palavra: ", i+1);
			scanf("%s", palavra);
			fflush(stdin);
		//função que escreve e pula um linha no arquivo do HD
			fprintf(arq, "%s\n", palavra);
		}
	}
	fclose(arq);
//abre o arquivo novamente, porém no modo leitura "r"	
	arq = fopen ("texto.txt", "r");
	if (arq == NULL)
		printf ("\nArquivo não aberto. Erro\n");
	else
//le o arquivo e printa na tela linha por linha != null
	{
		while((fgets(palavra, max, arq))!=NULL )
			printf("%s\n", palavra);
	}
	fclose(arq);
	return (0);
}