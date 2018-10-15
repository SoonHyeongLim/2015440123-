#include <stdio.h>

int main(void)
{
	int a,b,c;

	printf("세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.\n");
	printf("첫번째 정수를 입력하시오: ");
	scanf("%d",&a);
	printf("두번째 정수를 입력하시오: ");
	scanf("%d",&b);
	printf("세번째 정수를 입력하시오: ");
	scanf("%d",&c);

	 if(a/b>=1 && a/c>=1)
		 printf("가장 큰 수는 %d입니다\n",a);


	 else if (b/a>=1 && b/c>=1)
		 printf("가장 큰 수는 %d입니다\n",b);


	 else
		 printf("가장 큰 수는 %d입니다\n",c);

	 return 0;
}

