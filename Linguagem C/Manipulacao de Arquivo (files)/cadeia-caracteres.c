#include <stdio.h>
#include <string.h>

int main ()
{
    FILE *arq;
    char palavra[50];
    //cria um arquivo somente para escrita com nome arquivo.txt
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
        //se a string digitada for diferente de fim minusculo, é executado o bloco de repetição
        while((strcmp(palavra,"fim") != 0)) 
        {
        	//escreve no arquivo
            fputs(palavra,arq);
            //ferror: função que verifica se não aconteceu algum erro ao escrever no arquivo
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