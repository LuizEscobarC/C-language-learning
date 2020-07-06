#include <stdio.h>
int main()
{
	int filhos, npessoas;
	float salario, somas, somaf, msalario;
	npessoas = 0;
	somaf = 0;
	somas = 0;
	msalario = 0;
	printf("informe o salario: \n");
	scanf("%f", & salario);
	while (salario != -1)
	{
		printf("informe o numero de filhos:\n");
		scanf("%d", &filhos);
		npessoas++;
		if (salario > msalario)
		    msalario = salario;
		somaf =  somaf + filhos;
		somas = somas + salario;
		printf("informe o salario\n");
		scanf("%f", &salario);    
	}
	printf("A media de salarios é: %.2f\nA media de filhos é: %.2f\n O maior salário é: %.2f ",somas/npessoas,somaf/npessoas,msalario);
	return(0);
}
