#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario, novoS, aumento;
	int cargo;
	printf("digite o numero do seu cargo: ");
	scanf (" %d",&cargo   );
	printf("\ndigite o seu salario: "        );
	scanf (" %f",&salario);
	system("cls");
	 switch(cargo){
	 	case 1 : novoS = salario + (salario * 0.4  );
	 	    aumento =  salario * 0.4;
	 	    printf("\n O salario é: %.2f",salario);
	 	    printf("\n O aumento foi de %.2f", aumento);
	 	    printf("\n O novo salario é %.2f", novoS);
	 	    printf("\n O cargo é Servente...\n");
	 	    break;
	 	case 2 : novoS =  salario + (salario * 0.35);
	 	    aumento =  salario * 0.35;
	 	    printf("\n O salario é: %.2f",salario);
	 	    printf("\n O aumento foi de %.2f", aumento);
	 	    printf("\n O novo salario é %.2f", novoS);
	 	    printf("\n O cargo é Pedreiro...\n");
	    	break;
	 	case 3 : novoS = salario + (salario * 0.2  );
	 	    aumento = salario * 0.2;
	 	    printf("\n O salario é: %.2f",salario);
	 	    printf("\n O aumento foi de %.2f", aumento);
	 	    printf("\n O novo salario é %.2f", novoS);
	 	    printf("\n O cargo é Mestre de Obras...\n");
	    	break;
	 	case 4 : novoS = salario + (salario * 0.1  );
	 	    aumento = salario * 0.1;
	 	    printf("\n O salario é: %.2f",salario);
	 	    printf("\n O aumento foi de %.2f", aumento);
	 	    printf("\n O novo salario é %.2f", novoS);
	 	    printf("\n O cargo é Tec Segurança...\n");
	 	    break;
	 	default: printf("\n O numero digitado é inválido... saindo.\n");
		    break;  	
	 }
    system("pause");	 
}
