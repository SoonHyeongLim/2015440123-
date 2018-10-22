#include<stdio.h>
int main (void)
{
	int n,i;
	int j=0;

	printf("정수를 입력하시오: ");
	scanf("%d",&n);

	 while(n<7)
	 {
		 printf("정수를 다시 입력하시오: ");
		 scanf("%d",&n);
	 }

	for(i=7;i<=n;i++) 
		j+=i;

	printf("7부터 입력하신 정수의 합은 %d 입니다.\n",j);
	return 0;
}
