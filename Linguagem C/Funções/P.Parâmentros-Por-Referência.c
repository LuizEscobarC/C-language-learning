#include <stdio.h>

int calcQuadrado (int *x)
{
    *x = *x * (*x);
    return (*x);
}

int main()
{
    int num, resposta,x;
    x = num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    resposta = calcQuadrado (&num);
    printf("O quadrdo do número %d é %d\n",num, resposta);
}