#include<stdio.h>
int main(){
	float deposito, taxa, rendimento,total;
	printf("informe o valor do depósito: ");
	scanf("%f",&deposito);
	printf("\ninforme a taxa de juros: ");
	scanf("%f",&taxa);
	//calcula o rendimento
	rendimento=deposito*(taxa/100);
	total=deposito+rendimento;
	printf("\n O rendimento é: %.2f",rendimento);
	printf("\n O total é: %.2f", total);
	return(0);
}
