#include <stdio.h>
//tranforma para outra forma de temperatura
float convertep(float peso);

int main()
{
    float peso, resposta;
    printf("informe o peso em quilogramas: ");
    scanf ("%f", &peso);
    resposta = convertp(peso);
    printf("O peso %.2f em libras é %.2f\n", peso, resposta);
}
floar convertep(float peso)
{
    peso = peso * 2.68;
    return peso;
}