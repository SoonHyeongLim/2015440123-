#include <stdio.h>

int main (void)
{
	int n;

	printf("점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램\n");
	printf("점수를 입력하시오. ");
	scanf("%d",&n);

	if(n>79&&n<101)
         printf("당신의 등급은 A입니다.");
	else if(n>59&&n<80 )
         printf("당신의 등급은 B입니다.");
	else if(n>39&&n<60)
         printf("당신의 등급은 C입니다.");
	else if(n>19&&n<40 )
         printf("당신의 등급은 D입니다.");
	else 
		 printf("당신의 등급은 E입니다.");

	return 0;
}
