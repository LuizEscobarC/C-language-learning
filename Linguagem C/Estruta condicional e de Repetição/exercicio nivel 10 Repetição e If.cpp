#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i <=30; i++)
	{
		if (i % 3 == 0)
		   printf("O numero %d, é divisível por 3\n",i);
	}
	for (i = 1; i <=30; i++)
	{
		if (i % 7 == 0)
		   printf("O numero %d, pe divisivel por 7\n",i);    
	}
	return(0);
}
