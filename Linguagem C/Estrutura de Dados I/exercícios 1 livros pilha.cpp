#include <stdio.h>
#include <stdlib.h>

#define tamanho 3
	
typedef struct livros {
	int topo;
	int ini;
	int dados[tamanho];
}pilha_livros;

pilha_livros pilha;
int op;

void empilhar();
void desempilhar();
void imprimir();

int main() {
	pilha.ini = 0;
	pilha.topo = 0;
	op = 1;
	while (op != 0 ){
		system("cls");
		imprimir();
		scanf("%d", &op);
		switch (op) {
			case 1:
				empilhar();
				break;
			case 2:
				desempilhar();
				break;			
		}
	}
}

void imprimir () {
	printf("[   ");
	for (int i = 0; i < tamanho; i++ ) {
		printf("%d ", pilha.dados[i]);
	}
	printf("   ]");
}

//empilha um alemento
void empilhar () {
	if (pilha.topo == tamanho) {
		printf("\nPilha cheia!\n\n");
		system("Pause");
	} else {
		printf("\n digite o elemento: ");
		scanf("%d", &pilha.dados[pilha.topo]);
		pilha.topo++;
		system("Pause");
	}
}

void desempilhar() {
	if (pilha.ini == pilha.topo) {
		printf("\nPilha está vazia!\n\n");
		system("Pause");
	} else {
		pilha.dados[pilha.topo - 1] = 0;
		pilha.topo--;
	}
} 


