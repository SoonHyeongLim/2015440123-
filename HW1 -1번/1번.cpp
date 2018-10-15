#include <stdio.h>

int main (void) {

	int a,b;

 printf("두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램입니다.\n");
 printf("첫번째 정수를 입력하세요.");
 scanf("%d",&a); 

 printf("두번째 정수를 입력하세요.");
 scanf("%d",&b); 

 if(a>b) 
	 printf("둘 중 더 큰 정수는 %d 입니다.\n",a);


 else if(a<b)
	 printf("둘 중 더 큰 정수는 %d 입니다.\n",b);

 else 
	 printf("두 정수의 크기는 같습니다.\n");

 return 0;
}


