#include <stdio.h>
int main()
{
	int n, i;
	float s,um;
	
	i = 1;
	um = 1; 
	printf("digite o N: \n");
	scanf("%d", &n);
	
	do
	{	
	 	s = s + um/i;
	 	i++;
	}while (i <= n);
	printf("\nO S é: %.2f ", s);
	return(0);
}
