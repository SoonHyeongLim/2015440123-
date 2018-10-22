#include<stdio.h>
int main (void)
{
	int i,j;
	i=5;
	for(i=5;i>=0;i--)
	{
	for(j=1;j<=2*i+1;j++)	
		printf("*");
	printf("\n");
	}

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2*i+1;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
