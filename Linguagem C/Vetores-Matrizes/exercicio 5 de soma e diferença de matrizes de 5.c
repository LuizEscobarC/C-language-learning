#include <stdio.h>
#include <stdlib.h>
#define TAM 5 
int main ()
{
	//atribuição em vetores
	int j, vetorA[TAM][TAM] = {{1,2,3,4,5},{5,4,3,2,1},{9,7,8,6,5,},{4,3,2,1,9},{1,2,3,4,5}};
	int i, vetorB[TAM][TAM] = {{1,2,3,4,5},{5,4,3,2,1},{9,7,8,6,5,},{4,3,2,1,9},{5,4,3,2,1}};
	int somaV[5][5],subtracao[5][5];
	i = 0;
	j = 0;
	 for(i=0; i<TAM; i++)
	 {
	 	for (j=0; j<TAM; j++)
	 	{
	 		somaV[i][j] = (vetorA[i][j]+vetorB[i][j]);
	 		subtracao[i][j] = (vetorA[i][j]-vetorB[i][j]);
		}
	 }
	 for (i=0; i<5; i++)
	 {
	 	printf("\n");
	 	for (j=0;j<5; j++)
	 	{
	 		printf("  %d  ",somaV[i][j]);
		}
	 }
	 printf("\n\n");
	 for (i=0; i<5; i++)
	 {
	 	printf("\n");
	 	for (j=0;j<5; j++)
	 	{
	 		printf("  %d  ",subtracao[i][j]);
		}
	 }
	 return(0);
}
