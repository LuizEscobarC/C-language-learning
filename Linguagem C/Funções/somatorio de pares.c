#include <stdio.h>
#include <stdlib.h>

int somatorio_par (int N);

int main()
{
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    numero = somatorio_par(numero);
    printf("O somatorio entre os numeros pares do numero que digitou é %d\n",numero);
}

int somatorio_par (int N)
{
    int i;
    for (i = 1; i <= N; i++ )
    {
        if (N % 2 == 0)
            N = N + i;
    }
    return N;
}