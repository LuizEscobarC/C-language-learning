#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int teste(char caractere);

int main () 
{
    int resultado;
    char caractere;
    printf("Digite um caractere: \n");
    scanf(" %c",&caractere);
    strupr(caractere);
    resultado = teste(char caractere);
    if (resultado == 0)
        printf("O caractere é uma vogal!!!");
    else if (resultado  == 1)
        printf("O caractere é uma consoante ou c.especial ou numero!!!");
        system("pause");           
}
int teste(char caractere)
{
    int resultado;
    switch (caractere)
    {
    case 'A': resultado = 0;
        break;
    case 'E': resultado = 0;
        break;    
    case 'I': resultado = 0;
        break;
    case 'O': resultado = 0;
        break;
    case 'U': resultado = 0;
        break;        
    default : resultado = 1;
        break;
    }
    return resultado;
}