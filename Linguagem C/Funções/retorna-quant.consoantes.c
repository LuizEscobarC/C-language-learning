#include <stdio.h>
#include <string.h>
//entra parametro vetor por valor 
int conta (char nome[])
{
    //variaveis locais
    int i, tam, qtd;
    //função que retorna o tamanho da variável em int 
    tam = strlen (nome);
    //função que retorna a string maiuscula
    nome = strupr(nome);
    qtd = 0;
    //percorre o vetor
    for (i = 0; i < tam; i++)
    {
        //se for diferente das vogais cont!
        if ((nome[i] != 'A')&&(nome[i] != 'E')&&(nome[i] != 'I')&&(nome[i] != 'O')&&(nome[i] != 'U')&&(nome[i] != ' '))
            qtd++;
    }
    return qtd;
} 
int main()
{
    int total;
    char palavra[30];
    printf("informe a string: ");
    gets(palavra);
    total = conta(palavra);
    // EEHH TAH DANH!!! ai está a quantidade de consoates de string e a palavra
    total("A quantidade de consoantes da string %s é %d\n", palavra,total);
}