#include<stdio.h>
#include<math.h>
int main (){
	unsigned int n;
	int R,Q;
	printf("Digite um numero: ");
	scanf("%d",&n);
	Q = pow(n,2);
	R = sqrt(n);
	printf("\nO quadrado do numero é %d e a raiz quadrada é %d ",Q,R);
	return(0);
}
