#include <stdio.h>
#define TAM 20 
int main()
{
	float media [TAM];
	float notas[TAM][4];
	float somat,mediat,soma;
	int i,j;
	somat = 0;
	mediat = 0;
	
	for (i = 0; i < TAM; i++)
	{
		soma = 0;
		//Essa parte vai ser usada para somar as notas colunas de cada aluno linha 
		for (j = 0; j < 4; j++)
		{
			printf("Informe a nota %d do aluno %d: ". j+1, i+1);
			scanf("%f", &notas[i][j]);
			soma = soma + notas[i][j]; 
			//vai armazenar 4 notas em cadas linha e somar para no final fazer a media de cada um
		}
		media[i] = soma/4; // ap�s o primeiro loop ele faz a media a primeira linha e recom�a
		somat = somat + media[i]; // aqui acumula a soma de todas as medias de alunos
	}
	//nessa parte � feita a media da soma da m�dia de cada aluno
	mediat = somat/TAM; 
	
	for (i = 0; i < TAM; i++)
	{
		printf("A m�dia do aluno %d �: %.2f\n",i,media[i]); 
	}
	printf("A m�dia da turma �: %.2f\n", mediat);
	return(0);
}
