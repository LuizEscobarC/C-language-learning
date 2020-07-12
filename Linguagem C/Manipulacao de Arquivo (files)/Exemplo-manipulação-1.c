#include <stdio.h>

int main()
{
    FILE *arq;
    char letra;
    arq = fopen("arquivo.txt", "w");
    if (arq == NULL)
    printf("O arquivo não foi aberto. Ocorreu um erro\n");
    else
    {
        printf ("Digite um caractere: ");
        scanf(" %c", &letra);
        while((letra != 'f')&&(letra != 'F'))
        {
            fputc(letra, arq);
            if (ferror(arq))
            {
                printf(Erro na gravação!!!\n);
            }
            else
            {
                printf("Gravação efetuada com sucesso!\n");
            }
            printf("Digite outro caractere: ");
            scanf(" %c", &letra);
        }
    }
    fclose(arq);
}