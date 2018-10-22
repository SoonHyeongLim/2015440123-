#include<stdio.h>
int main (void)
{
	int i,j; 
	int t=0;

	for(i=3;i>0;i--)
	{
		t++;
    for(j=0;j<2*i-1;j++)  
	 printf("*");

	 printf(" ");

	for(j=0;j<2*t-1;j++)
	   printf("*");
	   
	 printf("\n");
	 }
	return 0; 
}

