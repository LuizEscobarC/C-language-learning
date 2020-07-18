#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 21

int verifica (char palavra[]);

int main(){
	char palavra [max];
	int i, vogais;
	printf("Digite uma palavra: ");
	fflush(stdin);
	scanf("%s",palavra);
	//chama a função colocando tudo maiusculo com strupr
	vogais = verifica (strupr(palavra));
	printf("Total de vogais na palavra: %d\n", vogais);
	system("pause");
	return 0;
}

int verifica(char palavra [max])
{
	int i, vogais = 0;
	char letra;
    //percorre o vetor pegando cada letra
	for (i = 0; i < max; i++){
		letra = palavra [i];
        //se a letra for vogal ele conta
		switch (letra){
			case 'A' : vogais++;
				break;
			case 'E' : vogais++;
				break;
			case 'I' : vogais++;
				break;
			case 'O' : vogais++;
				break;
			case 'U' : vogais++;
				break;	
            //se não somente sai...    
			default : break;						
		}
	}
	return vogais;
}