#include<stdio.h>
int main (void)
{
	int i,n;
	int j=0;

	printf("7���� ū ������ �Է��ϼ���: ");
	scanf("%d",&n);

	while(n<7)
	{
		printf("���� �Դϴ�!!!!!\n");
	    printf("������ �ٽ� �Է��ϼ���: ");
		scanf("%d",&n);
	}

	for(i=7;i<=n;i++)		
		j+=i;

		printf("7���� �Է��Ͻ� ���������� ���� %d �Դϴ�.\n",j);

		return 0;
}