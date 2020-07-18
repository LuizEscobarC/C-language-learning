#include <stdio .h>
#include <stdlib.h>
#include <string.h>
int Nconsoantes(char palavra[]);

int main()
{
    char palavra[21];
    int tamanho;
    printf("Digite um nome qualquer: \n");
    gets(palavra);
    tamanho = strlen(palavra);
    palavra = strupr(palavra);
    printf("O numero de consoantes da palavra é: %d", tamanho);
}

int Nconsoantes(char palavra[], int tamanho);
{
    int i, numeroConsoante;
    while(i <= tamanho)
    {
        switch (palavra[i])
        {
        case 'A':
            break;
        case 'E':
            break;
        case 'I':
            break;
        case 'O':
            break;
        case 'U':
            break;               
        default:
           numeroConsoante++;
            break;
        }
        i++;
    }
    return (numeroConsoante);
}

