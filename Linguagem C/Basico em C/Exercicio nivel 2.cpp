#include<stdio.h>
#include<math.h>
int main (){
	unsigned int n;
	int R,Q;
	printf("Digite um numero: ");
	scanf("%d",&n);
	Q = pow(n,2);
	R = sqrt(n);
	printf("\nO quadrado do numero � %d e a raiz quadrada � %d ",Q,R);
	return(0);
}
