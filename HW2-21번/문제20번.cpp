#include<stdio.h>
int main(void)
{
	int n,i,j,k;

	printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&n);
	k=0;

	for(i=1;i<=n;i++)
	{   
		for(j=1;j<=i;j++)
		{	if(i%j==0 && j!=1)
				   break;
		    else
				continue;
		}
      if(i==j)
		 k+=i; 
	} 
	printf("�Է��Ͻ� ���������� �Ҽ��� ���� %d �Դϴ�.",k);
	return 0;
}

