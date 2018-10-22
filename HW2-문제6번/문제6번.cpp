#include<stdio.h>
int main (void)
{
	int n;
	printf("양의 정수를 입력하세요:");
	scanf("%d",&n);

	while(n<=0)
	{
		printf("에러입니다!!!!!!!!!!");
		printf("양의 정수를 다시 입력하세요: ");
	    scanf("%d",&n);
	}
	printf("입력하신 양의 정수의 2배는 %d 입니다.\n",2*n);
	return 0;
}



	















