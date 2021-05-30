//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Estrutura da Fila
struct tfila {
	int dados[tamanho];
	int ini;
	int fim;
};

//Vari�veis globais
struct tfila fila;
int op;

//prototipa��o
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar();

//Fun��o principal
int main() {
	setlocale (LC_ALL, "Portuguese");
	op = 1;
	fila.ini = 0;
	fila.fim = 0;
	while (op != 0) {
		system("cls");
		fila_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		switch (op) {
			case 1:
				fila_entrar();
			break;
			case 2:
				fila_sair();
			break;	
		}
	}
	return(0);
}

//Adicionar um elemento no final da Fila
void fila_entrar() {
	if (fila.fim == tamanho) {
		printf("\nfila esta cheia \n\n");
		system("Pause");
	} else {
		printf("\nDigite o valor a ser inserido: ");
		scanf("%d", &fila.dados[fila.fim]);
		fila.fim++;
	}
}

//Retirar o primeiro elemento da Fila
void fila_sair() {
	if (fila.ini == fila.fim) {
		printf("\nA fila est� vazia\n\n");
		system("Pause");
	} else {
		int i;
		for (i = 0; i < tamanho; i++) {
			fila.dados[i] = fila.dados[i+1];
		}
		fila.dados[fila.fim] = 0;
		fila.fim--;
	}
}

//mostrar o conte�do da Fila
void fila_mostrar() {
	int i;
	printf("[   ");
	for (i = 0; i < tamanho; i++) {
		printf("%d  ", fila.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de op��es 
void menu_mostrar() {
	printf("\nEscolha uma op��o: \n");
	printf("1 - Incluir na Fila\n");
	printf("2 - Excluir da Fila\n");
	printf("0 - Sair\n\n");
}
