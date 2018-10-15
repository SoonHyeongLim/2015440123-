#include <stdio.h>

int main (void)
{
	int num;

	printf("하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램입니다.\n");

	printf("정수를 입력하시오.");
	scanf("%d",&num);

    if(num%2==0)
		printf("입력하신 정수는 짝수입니다.");

	else
		printf("입력하신 정수는 홀수입니다.");

	return 0;
}

