#include<stdio.h>
int main (void)
{
	int n=49;
	int i,j;

	for(i=0;i<10;i++)
	{
		printf("n�� ���ϱ��??: ");  
	    scanf("%d",&j);

		if(n<j)
		 printf("�Է��Ͻ� ������ Ů�ϴ�.\n");

		else if(n>j) 
		printf("�Է��Ͻ� ������ �۽��ϴ�.\n");
	
		else
		{ printf("�����Դϴ�!!!!!");
		break;}
	}

	if(i==10)
		printf("GAME OVER!!!!! ����� �Ӹ��� �����ϴ�!");

	return 0;
}

