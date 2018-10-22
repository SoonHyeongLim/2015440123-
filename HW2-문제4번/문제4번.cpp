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
	printf("100 이하의 3의 배수의 합은 %d 입니다.\n",n);

	return 0;
}





