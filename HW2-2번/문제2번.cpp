#include<stdio.h>
int main (void)
{
	int n,i;
    int j=0;


	for(i=0;i<10;i++)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d",&n);

		j+=n;

	}

	printf("�Է��Ͻ� �������� ���� %d �Դϴ�.\n",j);
	return 0;
}
