#include<stdio.h>
int main(){
	float deposito, taxa, rendimento,total;
	printf("informe o valor do dep�sito: ");
	scanf("%f",&deposito);
	printf("\ninforme a taxa de juros: ");
	scanf("%f",&taxa);
	//calcula o rendimento
	rendimento=deposito*(taxa/100);
	total=deposito+rendimento;
	printf("\n O rendimento �: %.2f",rendimento);
	printf("\n O total �: %.2f", total);
	return(0);
}
