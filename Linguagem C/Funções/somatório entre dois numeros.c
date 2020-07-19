#include <stdio.h>
#include <stdlib.h>
//somatório entre os 2 numeros 
//exemplo N1 = 5 e N2 = 10
//o programa fará : 5+6+7+8+9+10
void somatorio (int N1, int N2);
int main()
{
    int N1,N2;
    printf("Digite um número:\n ");
    scanf("%d", &N2);
    printf("Digite outro número: \n");
    scanf("%d", &N2);
    somatorio(N1,N2);
    system("pause");
}
void somatorio (int N1, int N2)
{
    int i, acumulador;
    //o acumulador recebe N1 para começar a contagem de entrada
    acumulador = N1;
    for (i = N1; i < N2; i++)
    {
    	// realiza o somatório entra os numeros de entrada do usuário
		acumulador = acumulador + i;
    }
    printf("O somatório é %d\n", acumulador);
}