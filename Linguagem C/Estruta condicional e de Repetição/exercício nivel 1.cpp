#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1,n2,n3,n4,n5,maior= 0 ,menor = 0;
	
	printf("digite o 1 numero : ");
	scanf("%d",&n1);
	printf("digite o 2 numero : ");
	scanf(" %d",&n2);
	printf("digite o 3 numero : ");
	scanf(" %d",&n3);
	printf("digite o 4 numero : ");
	scanf(" %d",&n4);
	printf("digite o 5 numero : ");
	scanf(" %d",&n5);
	
	
    if(n1>maior) 
	{
    	maior = n1;
    	menor = n1;
	}      
	if (n2>maior) 
	{
		maior = n2;	
	}
	    if(n2<menor) {
	        menor = n2;
        } 
	if(n3>maior) 
	{
		maior = n3;
	}
	    if(n3 < menor) {
	        menor = n3;
	    }
	if(n4>maior) 
	{
		maior = n4;
	}
        if(n4<menor) {
	        menor = n4;
	    }
	if(n5>maior)
	{
		maior = n5;	
	}
	    if(n5<menor) {
	        menor = n5;
	    }

	printf("\n oO maior é: %d", maior);
	printf("\n O menor numero é: %d \n", menor);
	system("pause");
}
