#include <stdio.h>

int main (void)
{
	int num;

	printf("�ϳ��� ������ �Է� �޾� �� ���� ¦��(even number)���� Ȧ��(odd number)������ ����ϴ� ���α׷��Դϴ�.\n");

	printf("������ �Է��Ͻÿ�.");
	scanf("%d",&num);

    if(num%2==0)
		printf("�Է��Ͻ� ������ ¦���Դϴ�.");

	else
		printf("�Է��Ͻ� ������ Ȧ���Դϴ�.");

	return 0;
}

