#include <stdio.h>
#include<math.h>
int main()
{
	float n1,n2,total;
	printf("Informe o primeiro numero: ");
	scanf("%f",&n1);
	printf("informe o segundo numero: ");
	scanf("%f", &n2);
	total=pow(n1,n2);
	printf("\n %2.f elevado a %2.f é: %2.f", n1,n2,total);
	return(0);
}
