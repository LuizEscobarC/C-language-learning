#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int num, resto, resto2;
	printf("Digite um numero: ");
	scanf(" %d", &num);
	system("cls");
	 resto = num % 7;
	 resto2 = num % 3;
	    if((resto = 7 ) && (resto2 = 3)){
		
	        printf("\nO numero %d � divis�vel ", num);
	}
	    else{
		
		    printf("\nO numero %d n�o � divis�vel por 7 e 3", num);
			}
	return(0);
	system("pause");		    
}

