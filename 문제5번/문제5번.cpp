#include<stdio.h>
int main (void)
{
	int i; 
	int n=1;
	int j=0;

	printf("100이하의 3의 배수들의 합을 출력하는 프로그램입니다.\n");

	do  
	{
	  i=n%3;

     if(i==0)
	{	j+=n;
	     n++; }
	 else 
		 n++;
	     
	}while(n<=100);

		printf("3의 배수들의 합은 %d 입니다.\n",j);

   return 0;
}