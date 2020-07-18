#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define dolar 5.52
float cambio(float reais);
int main(){
	setlocale(LC_ALL,"portuguese");
    float reais;
    printf("Qual é o valor que deseja cambiar? \n");
    scanf("%f",& reais);
    //reaproveitando variavel
    reais = cambio(reais); 
    printf("Você receberá\t %.2f dolares\n", reais);
    system("pause");
}
float cambio(float reais)
{
    float resultado;
    //faz o calculo
    resultado = reais / dolar;
    return resultado;
}