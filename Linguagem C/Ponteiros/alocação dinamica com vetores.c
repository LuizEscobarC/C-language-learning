#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tam;
    int *vetor;
    printf ("Escolha o tamnho do vetor: ");
    scanf("%d", &tam);
    vetor = (int *) malloc(sizeof (int)* tam);
    for (int i = 0; i < tam; i++) {
        vetor[i] = pow(2, i);
        printf ("posicao %d: %d\n", i, vetor[i]);
    }
    system("Pause");
    return(0);
}