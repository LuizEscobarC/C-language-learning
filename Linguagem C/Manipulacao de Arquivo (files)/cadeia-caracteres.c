#include <stdio.h>
#include <string.h>

int main ()
{
    FILE *arq;
    char palavra[50];

    arq = fopen ("arquivo.txt", "w");
    if (arq == NULL)
    {
        printf("Erro ao abrir o aquivo!!!\n");
    }
    else
    {
        printf("digite uma palavra: ");
        gets(palavra);
        fflush(stdin);
        while((strcmp(palavra,"fim") != 0)) 
        {
            fputs(palavra,arq);
            if (ferror(ard))
            {
                printf("Erro na gravação da string\n");
            }
            else
            {
                printf("gravação efetuada com sucesso!\n");
            }
            printf("Digite uma palavra: ");
            gets(palavras);
            fflush(stdin);
            
        }
    }
    fclose(arq);
}