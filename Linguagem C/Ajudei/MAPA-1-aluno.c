#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

struct contatos{
	//estava assim     int codigo,
	int codigo[10]; 
	//passei de int para char
	char cpf[31]; 
	char nome[30], email[100]; 
};

	int main (){
	int op, contador = 0;   	
	int i; 
	struct contatos pessoa[5];
	
	do{
		setlocale(LC_ALL,"Portuguese");
		printf(": Opcões:* 1.CADASTRO   2.EXIBIR TODOS  0.SAIR :\n***");
		printf("> selecione a opcao: ");
		scanf("%d", &op); 
		fflush(stdin); 
		
		
		switch(op){ 
			case 1: 
			
				if (contador <= 4){ 
					printf("\n\n CADASTRO \n\n");
					printf("\t Codigo gerado: %d", contador);		
					printf("\n\t Informe o nome : ");				
					fgets(pessoa[contador].nome, 50, stdin); 
					fflush(stdin); 
					printf("\t Informe o email: ");				
					fgets(pessoa[contador].email, 50, stdin); 
					fflush(stdin); 
					printf("\t Informe o Cpf: ");				
					//estava assim -->  scanf(pessoa[contador].cpf, 50, stdin); 
					fgets(pessoa[contador].cpf,50,stdin);
					//fgets não pode pegar numeros, mas sim somente caracteres, volte na linha 9 e observe a mudança
					fflush(stdin); 
					printf("\n: Cadastrado!\n\n"); 
					contador++; 
				 	system("pause"); 
				 	system("cls"); 
				 	
			}else{ 
				printf("\n\nO limite de cadastros foi atingido,lista lotada,!\n\n");
			 	system("pause");  
			 	system("cls"); 
			}
			break; 
		
			case 2: 
				
				if (contador == 0){
					printf("\n\t  Lista vazia!\n\n");
				 	system("pause"); 
				 	system("cls"); 
				}else{
					system("cls"); 
					printf("\n\nCADASTRADOS\n\n");
					
					for (i=0; i<contador;i++){			
						printf("> CODIGO GERADO %d \n", i);				
						printf("> Nome : %s", pessoa[i].nome);				
						printf("> email: %s", pessoa[i].email);				
						printf("> cpf: %d", pessoa[i].cpf);		
					}
					
				 	system("pause");  
				 	system("cls"); 
				}
				
		 	break;
			

			case 0:
				
				printf(": Programa finalizado... :)\n");
		 	break;
		 	default:
		 		printf("\n\n OPCAO INVALIDA! :\n\n");
		 		system("pause"); 
		 		system("cls");	 
		} 
		
	}while(op != 0); 
	
	
}