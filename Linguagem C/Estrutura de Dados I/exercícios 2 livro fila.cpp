#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho 3

struct cli {
	char nome[50];
	char hora[8];
};

typedef struct controle {
	struct cli cliente[tamanho];
	int ini;
	int fim;
}fila;

void show_clients();
void enfileirar();
void desenfileirar();
void menu();

fila clientes;
int op = 3;

int main() {
	clientes.fim = 0;
	clientes.ini = 0;
	show_clients();
	
	menu();
	scanf("%i", &op);
	system("cls");
	while (op != 0) {
		menu();
		switch (op) {
			case 1:
				enfileirar();
				menu();
				show_clients();
				system("pause");
			break;
			case 2:
				desenfileirar();
				show_clients();
				system("pause");
				
			break;		
		}
		system("cls");
		menu();
		scanf("%i", &op);
		show_clients();
		
		
	} 
	
}

void enfileirar() {
	if ( clientes.fim == tamanho ) {
		system("cls");
		printf ("\nCHEIO\n\n");
	} else {
		system("cls");
		menu();
		printf("\nDigite o nome do cliente: ");
		scanf(" %s", clientes.cliente[clientes.fim].nome);
		printf("\nDigite o horário do cliente: ");
		scanf(" %s", clientes.cliente[clientes.fim].hora);
		clientes.fim++;
		system("cls");
	}
}

void desenfileirar() {
	if (clientes.ini == clientes.fim) {
		system("cls");
		printf("\n Vazio!\n\n");
	} else {
		system("cls");
		menu();
		for (int i = 0; i < tamanho; i++) {
			clientes.cliente[i] = clientes.cliente[i+1];
		}
		clientes.fim--;
		printf("\n");
	}
}

void show_clients() {
	for (int i = 0; i < clientes.fim; i++) {
		printf("\n |||||||| Cliente %d |||||||||\n\n", i);
		printf("Nome: %s\n", clientes.cliente[i].nome);
		printf("Hora: %s\n\n", clientes.cliente[i].hora);
	}
}

void menu() {
	printf("\n\n 1 - enfileirar\n 2 - desinfileirar\n 0 - sair\n");
}

