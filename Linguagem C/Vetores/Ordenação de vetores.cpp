#include <stdio.h>
int main()
{
	int vetorA[10]; // de 0 a 9
	int i,j,troca;
	for (i=0;i<10;i++)
	{
		printf("Digite o %d elemento:", i+1); 
		scanf("%d", %vetorA[i]);              
	}
	for (i=0;i<9;i++)
	{               
		for (j=i+1; j<10;j++)       
		{
			if (vetorA[i] > vetora[j])
			{
				troca = vetorA[i]; 
				vetorA[i] = vetorA[j]; 
				vetor[j]  = troca;  
			}
		}
	}
	printf("\n VETOR ORDENADO: \n");
	for (i=0;i<10;i++)
	{
		printf("%d - ", vetorA[i]);
    }
    return(0);
}
