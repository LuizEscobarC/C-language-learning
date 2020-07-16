#include <stdio.h>
int main()
//nivel 6
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
	while ((acha == 0 ) && (i < 5)) // aqui ele s� para se as duas forem verdadeiras?
	{
	    if (vetorA[i] ==  busca)
	    {
	     	acha = 1; //ent�o mesmo aqui sendo verdadeiro, ele continua?
	    }
    	else
	    {
		    i++; // o contador vai ser incrementado at� o final?        
    	}
    }
    if (acha == 1)
        printf("O elemento %d foi encontrado na posi��o %d.",busca, i);
    else
        printf("O elemento n�o foi encontrado.");
        return (0);
}

