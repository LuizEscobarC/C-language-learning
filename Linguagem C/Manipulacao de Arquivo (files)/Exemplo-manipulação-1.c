#include <stdio.h>

int main()
{
	//ponteiro para arquivo (não se preocupe com isso)
    FILE *arq;
    char letra;
    //W : cria um arquivo de texto que pode ser realizada somente a escrita
    arq = fopen("arquivo.txt", "w");
    //retorna NULL quando não cria/sobreescreve o arquivo
    if (arq == NULL)
    printf("O arquivo não foi aberto. Ocorreu um erro\n");
    else
    {
        printf ("Digite um caracter e: ");
        scanf(" %c", &letra);
        //enquanto for digitado um caracter diferente de f e F continua a gravação
		while((letra != 'f')&&(letra != 'F'))
        {
            fputc(letra, arq);
            //ferror é uma função que indica que houve um erro na gravação
            if (ferror(arq))
            {
                printf("Erro na gravação!!!\n");
            }
            else
            {
                printf("Gravação efetuada com sucesso!\n");
            }
            printf("Digite outro caractere: ");
            scanf(" %c", &letra);
        }
    }
    //fecha e salva o arquivo
    fclose(arq);
}