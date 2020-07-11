#include <stdio.h>

int calcQuadrado(int x);

int main()
{
    int num, resposta;
    printf("digite um número inteiro: ");
    scanf("%d", &num);
    resposta = calcQuadrado(num);
    printf("O quadrado do numero %d é %d\n", num, resposta);
}

int calcQuadrado(int x)
{
    x = x*x;
    return x;
}
