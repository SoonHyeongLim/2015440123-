#include<stdio.h>
int main(void)
{
int n;
int j=0;

 printf("0�� �Է��ϸ� ����˴ϴ�.\n");

while(1)
{
    printf("������ �Է��ϼ���: ");
	scanf("%d",&n);
	j+=n;

	if(n==0)
		break;
	
}

printf("���ݱ��� �Է��Ͻ� �������� ���� %d �Դϴ�.\n",j);
return 0;
}

