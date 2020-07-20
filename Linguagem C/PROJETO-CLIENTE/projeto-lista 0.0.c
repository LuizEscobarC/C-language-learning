#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void novoCadastro();
void imprimirLista();
void encerrar();
void erro();

struct cliente{
	int codigo;
	char nome[31];
	int telefone;
	char email[51];
}; 

int main()
{
	setlocale(LC_ALL,"portuguese");
    struct Cliente pessoa[5];
	int i, opcao;
	
	printf("1 -    Novo cadastro    --\n");
	printf("2 - Listar os cadastros --\n");
	printf("0 -         Sair        --\n");
	scanf("%d", &opcao);
	
	switch (opcao)
    {
    case 1: novoCadastro();
        break;
    case 2: imprimirLista();
        break;
    case 0: encerrar(); 
		break;   
    default: erro();
        break;
    }
			 	
}

void novoCadastro()
{
	int i;
	system("cls");
	printf("---Cadastro de clientes---");
	for (i = 0; i < 5; i++)
	{
		pessoa[i].codigo = i+1;
		printf("Digite o nome do cliente: \n");
		scanf("%30[^\n]s", pessoa[i].nome);
		printf("Digite o numero de telefone: \n");
		scanf("%d", & pessoa[i].numero);
		scanf("%50[^\n]s", pessoa[i].email);
	}
}













