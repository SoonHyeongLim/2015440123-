#include<stdio.h>
int main (void)
{
	int n=1; 
	int i=0;

	printf("0�� �Է��ϸ� ����˴ϴ�.\n");

	while(n!=0)
	{
		printf("������ �Է��ϼ���: ");
	    scanf("%d",&n);

		if(i<n)
			i=n;
	}

	if(i != 0)
 printf("�Է��Ͻ� ���� �� ���� ū ������ %d �Դϴ�.\n",i);
 
 return 0;
}//������ ũ�� �� �ȵǴ� ������ ��!! 
