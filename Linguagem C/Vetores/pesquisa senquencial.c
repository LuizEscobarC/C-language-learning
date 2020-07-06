#include <stdio.h>
int main()
{
	int vetorA[5];
	int i, acha, busca;
	for (i=0;i<5;i++)
	{
		printf("Digite o %d elemento: ", i);
		scanf("%d", &vetorA[i]);
	}
	printf("Informe o elemento que deseja buscar: ");
	scanf("%d", &busca);
	i = 0;
	acha = 0;
	while ((acha == 0 ) && (i < 5)) // aqui ele só para se as duas forem verdadeiras?
	{
	    if (vetorA[i] ==  busca)
	    {
	     	acha = 1; //então mesmo aqui sendo verdadeiro, ele continua?
	    }
    	else
	    {
		    i++; // o contador vai ser incrementado até o final?        
    	}
    }
    if (acha == 1)
        printf("O elemento %d foi encontrado na posição %d.",busca, i);
    else
        printf("O elemento não foi encontrado.");
        return (0);
}

