#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Cosntantes
#define tamanho 5

//Estrutura da pilha
struct tpilha {
	int dados[tamanho];
	int ini;
	int fim;
};

//Váriaveis globais
struct tpilha pilha;
int op;

//prototipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//função principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	while (op != 0) {
		system("cls");
		pilha_mostrar();
		menu_mostrar();
		scanf("%d ", &op);
		switch (op) {
			case 1:
				pilha_entrar();
				break;
			case 2:
				pilha_sair();
				break;		
		}
	}
	return (0);
}

//mostrar o menu de opções 
void menu_mostrar() {
	printf("\nEscolha uma opção:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("0 - Sair\n\n");
	
}

//Mostra o conteúdo da pilha
void pilha_mostrar() {
	int i;
	printf("[   ");
	for (i = 0; i < tamanho; i++) {
		printf("%d   ", pilha.dados[i]);
	}
	printf("]\n\n");
}

//Adiciona um elemento no final da Pilha
void pilha_entrar() {
	if (pilha.fim == tamanho) {
		printf("pilha cheia!\n\n\n");
		system("Pause");	
	} else {
		printf("digite o calor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;		
	}
}


//retirar o ultimo elemento da pilha
void pilha_sair() {
	if (pilha.ini == pilha.fim) {
		printf("pilha vazia\n\n");
		system("Pause");
	} else {
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}
