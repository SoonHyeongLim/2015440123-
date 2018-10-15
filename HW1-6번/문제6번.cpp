#include<stdio.h>
int main (void)
{
	int n,a,b,c;
	
	printf("두자리 정수를 입력하시오:");
	scanf("%d",&n);
   
	if(n>=10)
	{
	a=n/10;
	b=n%10;
	c=10*b+a;
    printf("앞 뒤가 뒤바뀐 정수는 %d 입니다.",c);
	}
	else
	printf("앞 뒤가 뒤바뀐 정수는 %d 입니다.",n*10);

	return 0;
}//10월1일에 설명해주실 때, 1,2,3,4,6 번을 하라고 말씀하셔서 6번을 했습니다. 