#include<stdio.h>
int main (void)
{
	int i,n;
	int j=0;

	printf("7보다 큰 정수를 입력하세요: ");
	scanf("%d",&n);

	while(n<7)
	{
		printf("에러 입니다!!!!!\n");
	    printf("정수를 다시 입력하세요: ");
		scanf("%d",&n);
	}

	for(i=7;i<=n;i++)		
		j+=i;

		printf("7부터 입력하신 정수까지의 합은 %d 입니다.\n",j);

		return 0;
}