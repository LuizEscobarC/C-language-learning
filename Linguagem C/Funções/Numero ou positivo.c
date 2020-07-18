#include <stdio.h>
#include <stdlib.h>

void NouP (int numero);

int main()
{
    int numero;
    printf("Digite um numero, negativo ou positivo\n");
    scanf("%d", &numero);
    //chamo o procedimento...
    NouP (numero); 
    return 0;
}

void NouP (int numero)
{
    //se o numero for maior que zero...
	if (numero > 0)
		printf("O numero é positivo\n\n");
    //se o numero for menor que zero...    
	else if (numero < 0 )
		printf("O numero é negativo\n\n");	
	else 
		printf("Numero inválido\n");
	system("pause");
}