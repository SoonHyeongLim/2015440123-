#include<stdio.h>
int main (void)
{
	int i,j;
	printf("정수를 입력하세요: ");
	scanf("%d",&j);
	printf("입력하신 정수의 인수는 ");

	for(i=1;i<=j;i++)
	{ 
  if(j%i==0) 
	  printf(" %d ",i);
  else
      continue;
	}
	printf("\n");
	return 0;
}