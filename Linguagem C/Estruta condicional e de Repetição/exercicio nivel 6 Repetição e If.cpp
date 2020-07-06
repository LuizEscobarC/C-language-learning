// entrada: numeros,media,maior,menor,impar,par
#include <stdio.h>
int main(){
	int numeros,maior,menor,par,impar,i;
	float soma;
	maior = 0;
	menor = 0;
	par = 0  ;
	impar = 0;
	i = 0    ;
	soma = 0 ;
	printf("digite um n qualquer: \n");
    scanf("%d", & numeros);
    menor = numeros;
	do{
		
		if (numeros % 2 == 0)
		    par++;
		else 
		    impar++;
		    
	    if (numeros > maior)
		    maior = numeros;	    
		else if (menor > numeros)
		    menor = numeros;	  
		    	    
		soma = soma + numeros;
		i++;
		printf("digite um n qualquer: \n");
		scanf("%d", & numeros);
	}while (numeros != 0);
	printf("A quantidade de numeros é %d e a média dos numero é %.2f\n O maior numero é %d\n O menor numero é %d\n A QTDD de n par é %d\n A QTDD de n impares são: %d ",i,soma/i, maior,menor,par,impar);
	return(0);
	}
