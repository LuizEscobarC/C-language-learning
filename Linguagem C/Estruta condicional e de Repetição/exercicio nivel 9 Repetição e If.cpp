// soma, impar
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int soma, impar, cont;
	soma = 0;
	for (cont = 200; cont <=500; cont++)
	{
		if (cont % 2 == 1)
		{
			soma = soma + cont;
		}
	}
	printf("A soma dos n�meros �mpares entre 200 e 500 �: %d", soma);
	return(0);
} 
