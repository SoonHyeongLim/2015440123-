#include<stdio.h>
int main (void)
{
	int i,j,k;

	for(i=5;i>=0;i--)
	{
		for(j=i;j>0;j--)
		printf("%d",j); 
	    for(j=0;j<=i;j++)
	        printf("%d",j);
		printf("\n");
	}
	
    	for(i=1;i<6;i++)
	 { 
	   for(j=i;j>0;j--)
	      printf("%d",j);
	   for(j=0;j<=i;j++)
	      printf("%d",j);
       printf("\n");
	 } 
	 printf("\n");

	return 0;
}