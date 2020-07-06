#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade, cont, cont2, casadas, solteiras, separadas_viuvas, repita, estadocivil;
	float peso, somai, somapeso;
	char sexo;
	repita = 1;
	somai = 0;
	somapeso = 0;
	estadocivil = 0;
	separadas_viuvas = 0;
	casadas = 0;
	solteiras = 0;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	do{
		printf("digite o seu peso: ");
		scanf("%f", &peso);
		system("cls");
		printf("Digite o seu sexo\n  M -  para masculino\n  F - para feminino:\n");
		scanf(" %c", &sexo);
		system("cls");
		printf("Digite seu estado civil\n 1 para casado 2 para solteiro  3 para separado(a) ou viuvo(o)\n");
		scanf("%d", &estadocivil);	
		system("cls");
		somapeso = somapeso + peso;
		somai = somai + peso;
		
		while (repita == 1)
		{
		    if (estadocivil == 1){
		        casadas++;
		        break;
		    }
		    else if (estadocivil == 2)
		    {
			    solteiras++;
			    break;
		    }
			else if (estadocivil  == 3)
			{
			    separadas_viuvas++;	
			    break;
			}
			else
			{
			    printf("estado civil invalido\n");
			    repita = 1;
			}
	    }
	    printf("Digite sua idade: 0 para concluir\n");
	    scanf("%d", &idade);
	    system("cls");
	    cont++;
	}while(idade != 0);
	printf("Casadas: %d\n Solteiras: %d\n Separadas ou viuvas: %d\n ",casadas,solteiras,separadas_viuvas);
	printf("A media de idade é %.2f\n A de peso é %.2f",somai/cont, somapeso/cont);
	return(0);
}
    // arruma essa porra seu filho da puta
