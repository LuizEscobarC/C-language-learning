#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i,mult,result;
	
	for (i = 1; i <= 10; i++)
	{
		for (mult = 1; mult <=10; mult++){
			result = i*mult;
			printf("- %d X %d = %d\n", i, mult,result);
		}
		printf("\n");
	}
	return(0);
}
