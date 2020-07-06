#include<stdio.h>
int main(){
	float n1,n2,n3,n4,media;
	printf("Digite a primeira nota : ");
	scanf("%f",&n1);
	printf("\nDigite a primeira nota : ");
	scanf("%f",&n2);
	printf("\nDigite a primeira nota : ");
	scanf("%f",&n3);
	printf("\nDigite a primeira nota : ");
	scanf("%f",&n4);
	 media = (n1+n2+n3+n4)/4;
	 printf("\nA média é %.2f",media);
	 return(0);
}
