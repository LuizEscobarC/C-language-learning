// soma_compra, data, preco
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int cont, numero, quantidade;
	char data [15];
	float preco, soma_compra;
	cont = 1;
	soma_compra = 0;
	printf("Qual o numero do pedido?\n");
	scanf("%d", &numero);
	fflush(stdin);
	do
	{	 
		printf("Qual a quantidade?\n");
		scanf("%d", &quantidade);
		fflush(stdin);
		printf("Qual o preço do produto?\n");
		scanf("%f", &preco);
		fflush(stdin);
		printf("Qual a data do produto?\n");
		gets(data);
		if (quantidade != 1)
		    soma_compra = soma_compra + (preco * quantidade);   
		else 
		    soma_compra = soma_compra + preco;
		       
		cont++;
	    printf("Qual o numero do pedido? 0 para concluir\n");
	    scanf("%d", &numero);
		fflush(stdin);	
	}while (numero != 0);
	printf("\nA soma é %.2f", soma_compra);
}
