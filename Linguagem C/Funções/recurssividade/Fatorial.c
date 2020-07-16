#include <stdio.h>

int fatorial (int x);

int main()
{
    int num, resposta;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    resposta =  fatorial(num);
    printf("O fatorial é %d\n", resposta);
}
//parametro por valor
int fatorial (int x)
{
    //aqui vai ser executada uma função recurssiva 
    if (x == 0)
        returno 1;
    else
        return x * fatorial(x-1);
}
