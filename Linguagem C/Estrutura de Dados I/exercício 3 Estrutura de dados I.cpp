#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	int i, *ptr_1, *ptr_2;
	i = 5;
	
	ptr_1 = (int *) malloc(sizeof(int)*i);
	ptr_2 = (int *) malloc(sizeof(int)*i);
	
	for (int j = 0; j < i; j++) {
		ptr_1[j] = pow(j, 2);
		printf("%p    -    %d\n",ptr_1, ptr_1[j]);
	}
	printf("\n\n");
	for (int j = 0; j < i; j++) {
		ptr_2[j] = pow(j, 3);
		printf("%p    -    %d\n",ptr_2, ptr_2[j]);
	}
}
