#include<stdio.h>
int main (void)
{
	int i,j;
	 int t =1 ;

	printf("100������ �Ҽ���"); 

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
	printf("�Դϴ�.\n");
	return 0; 
}