#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    FILE *arq;
    char frase[50];
    arq = fopen("arquivo.txt", "a+");
    if (arq == NULL)
    {
        printf("O arquivo não foi aberto. Error!!!\n");
    }
    else
    {
    	//! transforma algo verdadeiro em falso, logo, enquanto o arquivo não chegar no fim, continue (a função retorna 0 se chegar no fim)
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
    system("pause"); //acrescentei isso pq os professores não perceberam que o executavel abria e logo fechava pois não tinha um "pause"
     return(0);
     //para funcionar,execute uma vez e dps escreva algo dentro do arquivo que foi gerado
}