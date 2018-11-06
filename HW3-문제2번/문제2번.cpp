#include<stdio.h>
int addNumber ( int a , int b ) {
	int i,r,t;
	int s=0;
	a<b? (r=a,t=b) : (r=b,t=a);

  for(i=r;i<=t;i++)
	  s+=i;
  return s;
}

int main (void) {
	int a,b; 
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d",&a,&b);
	printf("두 개의 정수 사이의 합은 %d 입니다.\n",addNumber(a,b));
	return 0;
}

