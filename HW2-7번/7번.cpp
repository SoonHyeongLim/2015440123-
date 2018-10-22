#include<stdio.h>
int main(void)
{
int n;
int j=0;

 printf("0을 입력하면 종료됩니다.\n");

while(1)
{
    printf("정수를 입력하세요: ");
	scanf("%d",&n);
	j+=n;

	if(n==0)
		break;
	
}

printf("지금까지 입력하신 정수들의 합은 %d 입니다.\n",j);
return 0;
}

