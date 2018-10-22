#include<stdio.h>
int main (void)
{
	int i;
	int n=1;
	printf("0을 입력하면 종료됩니다.\n");

	while( n!=0 )
	{ printf("\n");
	  printf("\n정수를 입력하세요: ");
     	scanf("%d",&n);

		if(n!=0)
	{    printf("\n인수는");
		for(i=1;i<=n;i++)
		{
			if(n%i ==0)
		  printf(" %d ",i);}
	 
		 continue;
	}
		else 
         break;
		printf("\n");
	}
	return 0;

}












