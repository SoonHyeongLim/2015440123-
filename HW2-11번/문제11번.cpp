#include<stdio.h>
int main (void)
{
	int i;
	int n=1;
	printf("0�� �Է��ϸ� ����˴ϴ�.\n");

	while( n!=0 )
	{ printf("\n");
	  printf("\n������ �Է��ϼ���: ");
     	scanf("%d",&n);

		if(n!=0)
	{    printf("\n�μ���");
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












