#include<stdio.h>
int main (void)
{
	int i,n,j; 

	printf("�� ���� ����ϰڽ��ϱ�?: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i*2-1;j++)
			printf("*");
    
	 printf("\n");          
	}

	return 0;
}