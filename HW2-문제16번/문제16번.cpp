#include<stdio.h>
int main (void)
{
	int i=1;
	int n,j;
	

	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d",&n);

	while(1)
	{
    j=n/10;
	n=j;
	i++;

	if(j>10)
	continue;

	else
	break;
	
	}

	printf("�Է��Ͻ� ������ �ڸ� ���� %d �Դϴ�.\n",i);

	return 0;
}