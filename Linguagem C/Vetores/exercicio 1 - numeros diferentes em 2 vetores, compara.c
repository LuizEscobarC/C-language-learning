 /*A computação, frequentemente, é utilizada para servir de ferramenta na identificação
de diferenças ou semelhanças entre objetos. Dessa forma, faça um programa
que leia dois vetores A e B e apresente a quantidade de posições que possuem
elementos diferentes entre um vetor e outro.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
	int vetorA[TAM] = {2,2,2,2,2},vetorB[TAM] = {2,2,2,2,2}, i,j, diferentes;
	 for (i = 1; i < TAM; i++ )
	 {
	 	for (j = 1; j < TAM; j++)
	 	{
	 		if (vetorA[i] != vetorB[i])
	 			diferentes++;
	    }
	 }
	printf("A quantidade de numeros diferentes é: %d ", diferentes);
	return(0);
}
