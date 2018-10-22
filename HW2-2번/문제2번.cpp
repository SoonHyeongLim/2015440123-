#include<stdio.h>
int main (void)
{
	int n,i;
    int j=0;


	for(i=0;i<10;i++)
	{
		printf("정수를 입력하세요: ");
		scanf("%d",&n);

		j+=n;

	}

	printf("입력하신 정수들의 합은 %d 입니다.\n",j);
	return 0;
}
