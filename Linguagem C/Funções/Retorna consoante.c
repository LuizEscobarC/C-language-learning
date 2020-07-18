#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Nconsoantes(char palavra[], int tamanho);

int main()
{
    char palavra[21];
    int tamanho;
    printf("Digite um nome qualquer: \n");
    gets(palavra);
    //pega o numero do tamanho da string
    tamanho = strlen(palavra);
    //retorna a palavra maiuscula 
    strupr(palavra);
    //reciclo a variavel para pegar o numero de consoantes
    tamanho = Nconsoantes(palavra, tamanho);

    printf("O numero de consoantes da palavra é:\t%d\n", tamanho);
    system("pause");
}

int Nconsoantes(char palavra[], int tamanho)
{
    int i, numeroConsoante = 0;
    char letra;
    while(i <= tamanho)
    {
        letra = palavra[i];
        switch (letra)
        {
        case 'A': break;
        case 'E': break;
        case 'I': break;
        case 'O': break;
        case 'U': break;
		case '\0': break;               
        default: numeroConsoante++;
            break;
        }
        i++;
    }
    return (numeroConsoante);
}