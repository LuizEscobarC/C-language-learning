 /*A computa��o, frequentemente, � utilizada para servir de ferramenta na identifica��o
de diferen�as ou semelhan�as entre objetos. Dessa forma, fa�a um programa
que leia dois vetores A e B e apresente a quantidade de posi��es que possuem
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
	printf("A quantidade de numeros diferentes �: %d ", diferentes);
	return(0);
}
