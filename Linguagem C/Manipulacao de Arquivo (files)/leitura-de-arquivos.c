#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *arq;
    char frase[50];
    arq = fopen("arquivo.txt", "r");
    if (arq == NULL)
    {
        printf("O arquivo não foi aberto. Error!!!\n");
    }
    else
    {
        while (!feof(arq))
        {
            fgets(frase, 50, arq);
            if (ferror(arq))
            {
                printf("erro na leitura do arquivo!\n");
            }
            else
            {
                printf("Leitura realizada com sucesso.Acadeia é: %s \n",frase);
            }
            
        }
    }
    fclose(arq);
}