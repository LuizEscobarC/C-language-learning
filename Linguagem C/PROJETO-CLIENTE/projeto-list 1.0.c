#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//OBS:deixei pra fazer esse código 2 horas antes das 23:59 18/07 :'(

#define MAX 50
//usei constante pois é mais seguro
struct clientes
{
	int codigo;
	char nome[MAX], telefone[MAX], email[MAX];
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha, cont=0, i;
	struct clientes pessoa[5];
	
	do
	{
		/*menu, fiz uma versão alpha desse código, usando
		ponteiros, mas não consegui concluir por falta de 
		tempo. Onde cadastrar e imprimir são procedimentos 
		void passando a struct por referencia, tive bastan-
		te problema com  (*cad).codigo e cad->codigo haha*/
		
		printf("<---------MENU--------->\n");
		printf("Escolha 1 para CADASTRAR\n");
		printf("Escolha 2 para LISTAR\n\n");
		printf("Escolha 0 para ENCERRAR\n\n");
		scanf("%d", &escolha);
		system("cls");
		fflush(stdin);
		switch(escolha)
		{
			case 1:
				if(cont < 5)
				{
					//Repeti alguns trechos para ficar vizualmente bonito para o usuário
					system("cls");
					printf("<----CADASTRO DE CONTATO---->\n");
					pessoa[cont].codigo = cont + 1;
					printf("Código -: %d\n", pessoa[cont].codigo);
					printf("Digite o nome: \n");
					fgets(pessoa[cont].nome, MAX, stdin);
					fflush(stdin);
					system("cls");
					//
					printf("<----CADASTRO DE CONTATO---->\n");
					printf("Código -: %d\n", pessoa[cont].codigo);
					printf("Digite o telefone: \n");
					fgets(pessoa[cont].telefone, MAX, stdin);
					fflush(stdin);
					system("cls");
					//
					printf("<----CADASTRO DE CONTATO---->\n");
					printf("Código -: %d\n", pessoa[cont].codigo);
					printf("Digite o email: \n");
					fgets(pessoa[cont].email, MAX, stdin);
					printf("\n");
					cont++;
				}
				else
				{
					printf("----Agenda lotada!----\n\n");
					system("pause");
				}
				break;
			case 2:
				// ´verifico se o primeiro código está preenchido
				
				/* No meu código falho, o cliente poderia escolher
				qual cliente quer imprimir na tela, por código e
				tinha a opção para ordenar por ordem decrescente*/ 
				if(pessoa[0].codigo != 1)
				{
					system("cls");
					printf("Agenda vazia!\n\n");
					system("pause");
				}
				else
				{
					
					printf("<----LISTA DE CONTATOS---->\n");
					for(i=0;i<cont;i++)
					{
						printf("..........\n ");
						printf("CÓDIGO: %d\n", pessoa[i].codigo );
						printf("NOME    -> %s", pessoa[i].nome);
						printf("TELEFONE-> %s", pessoa[i].telefone);
						printf("EMAIL   -> %s\n\n", pessoa[i].email);
					}
					printf("--pressione 2 vezes--\n\n");
					system("pause");
					//caso o usuario aperte algo sem querer antes de ver a lista
					system("pause");
				}
				break;
			case 0:
				//O cliente poderia cliar sem querer em 0 para sair ...nunca se sabe...
				system("cls");
				printf("----------------------Deseja mesmo encerrar?----------------------\n\n");
				printf("Digite qualquer coisa para para voltar ao MENU -- 0 PARA SAIR --\n\n");
				scanf("%d", &escolha);
				system("cls");
				system("pause");
				break;
			default:
				system("cls");
				printf("Opção inválida!\n\n");
				system("pause");
		}
	system("cls");
	}while(escolha !=0);
	return(0);
	/*Não queria falar muito sobre meu antigo código, maas, haha.
	
	Meu código QUASE salváva os clientes em um arquivo, e
	todas vez que o código era aberto verificava se tinha 
	algo no arquivo.txt :D*/
	/*queria ter a chance de mandar, mas fazer o que, melhor
	não ficar de DP*/
	
	//OBRIGADO PELA ATENÇÃO, TENHA UM ÓTIMO TRABALHO!!!
}