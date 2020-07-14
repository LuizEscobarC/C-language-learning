#include <stdio.h>

float convertet(float celsius);
int main()
{
    float celsius, resposta;
    printf("informe a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    resposta =  convertet(celsius);
    printf("A temperatura %.2f em Fahreneit é %.2f\n", celsius, resposta);
}

float convertet(float celsius)
{
    float temp;
    temp = celsius * 1.8 + 32;
    return temp;
}