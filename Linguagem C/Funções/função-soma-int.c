#include <stdio.h>
#include <stdlib.h>

int soma()
{
    float num1,num2,total;
    printf("Digite o primeiro numero: ");
    scanf("f", &num1);
    printf("Digite o sugundo numero: ");
    scanf("f", &num2);
    total = num1 + num2;
    printf("A soma é %.2f", total);
    return (0);
}
int main()
{
    system ("cls");
    soma();
    return (0);
}