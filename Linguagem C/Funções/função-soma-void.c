#include <stdio.h>
#include <stdlib>

void soma()
{
    float num1, num2, total;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    total = num1 + num2;
    printf("A soma é %.2f\n", total);
}
int main()
{
    system ("cls");
    soma();
    return (0);
}