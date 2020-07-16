#include <stdio.h>
int fibonacci (int x);
//nivel 4
int main()
{
    int num, resposta;
    printf("Digite em numero inteiro: ");
    scanf("%d", &num);
    resposta = fibonacci (num);
    printf("O fibonacci é %d\n", resposta);
}

int fibonacci (int x)
{
    if ((x == 0)||(x == 1))
        return x;
    else
        return fibonacci (x - 2) + fibonacci (x - 1);    
}
