#include<stdio.h>
int main (void)
{
	int j;
	int i=0;

	for(j=1;j<=100;j++)
	{
		if(j%5==0)
			i+=j;

	}
	printf("100������ 5�ǹ���� ���� %d �Դϴ�.\n",i);
	return 0;
}




