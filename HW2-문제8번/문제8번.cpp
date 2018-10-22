#include<stdio.h>
int main (void)
{
	int i,j; 

   printf("1에서 9까지의 수를 입력하세요: ");
   scanf("%d",&i);

   for(j=1;j<10;j++)
	   printf("%d x %d = %d\n",i,j,i*j);

   return 0;
}