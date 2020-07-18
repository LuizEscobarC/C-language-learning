#include <stdio.h>
#include <stdlib.h>

void imprima(int N, char palavra[]);

int main()
{
	int N;
	char palavra[21];
	
	printf("Digite UMA palavra: \n");
	fgets(palavra, 20, stdin);
	printf("Digite o numero de vezes que deseja imprimir ela na tela: \n");
	scanf("%d", &N);
	imprima(N, palavra);
}
//vai entrar uma string de qualquer tamanho
void imprima(int N, char palavra[])
{
	int i;
	i = 1;
    //imprime até o valor até que i seja menor igual a N
	while (i <= N)
	{
		printf("\t%s\n\n",palavra);
        i++;
	}
	system("pause");
}