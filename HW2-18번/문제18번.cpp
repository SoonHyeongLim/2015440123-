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
	printf("100이하의 5의배수의 합은 %d 입니다.\n",i);
	return 0;
}




