#include<stdio.h>
int main (void)
{
	int i,j;
	 int t =1 ;

	printf("100이하의 소수는"); 

	for(i=2;i<=100;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{ t=j;
			break;} 

			else
			continue; 
		}
     
		if(t==i)
			printf(" %d ",t);
		else 
           continue;
	}
	printf("입니다.\n");
	return 0; 
}