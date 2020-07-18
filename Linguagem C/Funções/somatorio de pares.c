#include <stdio.h>
#include <stdlib.h>
//retorna o somatorio dos numeros pares até o numero digitado
int somatorio_par (int N);

int main()
{
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    numero = somatorio_par(numero);
    printf("O somatorio entre os numeros pares do numero que digitou é %d\n",numero);
    system("pause");
}

int somatorio_par (int N)
{
    int i, S;
    S = 0;
    
    for (i = 1; i <= N; i++)
    {
    	//soma somente os pares
        if (i % 2 == 0)
            S = S + i;
    }
    //retorna o somatório
    return S;
}