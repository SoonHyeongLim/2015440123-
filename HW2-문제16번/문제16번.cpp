#include<stdio.h>
int main (void)
{
	int i=1;
	int n,j;
	

	printf("정수 하나를 입력하시오: ");
	scanf("%d",&n);

	while(1)
	{
    j=n/10;
	n=j;
	i++;

	if(j>10)
	continue;

	else
	break;
	
	}

	printf("입력하신 정수의 자릿 수는 %d 입니다.\n",i);

	return 0;
}