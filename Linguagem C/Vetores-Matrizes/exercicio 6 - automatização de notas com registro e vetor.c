#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct aluno
{
	char nome[31];
	float  nota[4];
	float  media;
};
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i,j;
	float soma;
	struct aluno alunos[5];
	struct aluno troca;
	for ( i = 0; i < 5; i++ )
	{
		printf("Digite a nome do aluno %d :   ",i+1);
		scanf(" %30[^\n]s", alunos[i].nome);
		for (j = 0; j < 4; j++ )
		{
			printf("Digite a nota %d do aluno %d =  ",j+1 ,i+1);
			scanf("%f", &alunos[i].nota[j]);
			soma = soma + alunos[i].nota[j];			
		}
		alunos[i].media = soma/4;
		soma = 0;
	}
	system("cls");
	//ordenando
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (alunos[i].media > alunos[j].media)
			{
				troca = alunos[i];
				alunos[i] = alunos[j];
				alunos[j] = troca;
			}
		}
	}
	//imprimindo
	for (i = 0; i < 5; i++ )
	{
		printf("O nome do aluno %d é =  %s   ----->    ",i+1 , alunos[i].nome);
		printf("A media do aluno %d é  =>  %.1f\n\n\n\n ",i+1, alunos[i].media);
	}
	system("pause");
	system("pause");
	system("pause");
	return(0);
}
