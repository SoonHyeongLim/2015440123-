#include<stdio.h>

int main (void)
{
	int i=0;
	int n=0;
		 
	while(i<100)
	{

		if(i%3==0) {
			n+=i;
			i++;
		}
		else 
			i++;
	}
	printf("100������ 3�ǹ���� ���� %d �Դϴ�.",n); 

	return 0;
}

