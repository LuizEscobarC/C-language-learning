#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[10], i, j, troca;
	 for(i= 1; i <= 10; i++)
	 {
	 	printf("Digite um numero : ");
	 	scanf("%d", &vetor[i]);
	 }
	 for(i = 1; i < 10; i++)
	 {
	 	for (j = i+1; j <= 10; j++) 
	 	{
	 		if (vetor[i] > vetor[j])
	 		{
	 			troca = vetor[i];
	 			vetor[i] = vetor[j];
	 			vetor[j] = troca;
			} 
			
		}
	 }
	 
	 for(i= 1; i <= 10; i++)
	 {
	 	printf("----->  %d", vetor[i]);
	 }
	 return(0);
}
