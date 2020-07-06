#include<stdio.h>
#include<math.h>

#define pi 3.14
int main(){
	float raio, area, perimetro;
	printf("Digite o raio: ");
	scanf("%f",&raio);
	area = pi*(pow(raio,2));
	perimetro = 2*pi*(pow(raio,2));
	printf("A area do circulo do raio %.2f é %.2f e o perimentro é %.2f",raio,area,perimetro);
	return(0);
}

