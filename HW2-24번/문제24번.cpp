#include<stdio.h>
int main (void)
{
	int i,n,j; 

	printf("몇 줄을 출력하겠습니까?: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i*2-1;j++)
			printf("*");
    
	 printf("\n");          
	}

	return 0;
}