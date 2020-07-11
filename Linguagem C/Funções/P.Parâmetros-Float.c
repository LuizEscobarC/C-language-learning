#include <stdio.h>
#include <stdlib.h>
 float soma(float n1, n2)
 {
     float total;
     total = n1 + n2;
     return (total);
 }

 int main()
 {
     float num1, num2, resosta;
     system("cls");
     printf("Digite o primeiro numero: ");
     scanf("%f", &num1);
     printf("Digite o segundo numero: ");
     scanf("%f", &num2);
     resposta = soma(num1, num2);
     printf("A soma é igual a %.2f\n", resposta);
     return(0);
 }