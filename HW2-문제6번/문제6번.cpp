#include<stdio.h>
int main (void)
{
	int n;
	printf("���� ������ �Է��ϼ���:");
	scanf("%d",&n);

	while(n<=0)
	{
		printf("�����Դϴ�!!!!!!!!!!");
		printf("���� ������ �ٽ� �Է��ϼ���: ");
	    scanf("%d",&n);
	}
	printf("�Է��Ͻ� ���� ������ 2��� %d �Դϴ�.\n",2*n);
	return 0;
}



	















