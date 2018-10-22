#include<stdio.h>
int main (void)
{
	int n=1; 
	int i=0;

	printf("0을 입력하면 종료됩니다.\n");

	while(n!=0)
	{
		printf("정수를 입력하세요: ");
	    scanf("%d",&n);

		if(i<n)
			i=n;
	}

	if(i != 0)
 printf("입력하신 정수 중 가장 큰 정수는 %d 입니다.\n",i);
 
 return 0;
}//음수의 크기 비교 안되니 수정할 것!! 
