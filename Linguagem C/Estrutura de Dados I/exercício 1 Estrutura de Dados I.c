#include<stdlib.h>
#include<stdio.h>

int main() {
	int *ptr;
	ptr = (int *)malloc(sizeof(int));
	
	*ptr = 42;
	printf("A valor : %d\n", *ptr);
 }

