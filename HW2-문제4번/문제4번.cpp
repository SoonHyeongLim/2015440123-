#include<stdio.h>

int main (void)
{
	int i;
	int n=0;

	for(i=0;i<100;i++)
	{
		if(i%3==0)
	    n+=i;		
	}
	printf("100 ������ 3�� ����� ���� %d �Դϴ�.\n",n);

	return 0;
}





