#include<stdio.h>
//정수 3개 중 가장 작은 수를 반환하는 함수 
int findSmallNumber (int a,int b,int c)
{ int i; 
  if(a<=b && a <= c)
	  i=a;
  else if (b <=a && b <=c) 
	  i=b;
  else 
	  i=c;
 return i;
}

int main (void)
{
	int a,b,c;
	printf("세 개의 수를 입력하시오: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("입력하신 숫자들 중에서 가장 작은 숫자는 %d 입니다.\n",findSmallNumber(a,b,c));
	return 0;
}
