#include<stdio.h>
int main (void)
{
	int n,i;
	int t=0;

     printf("정수를 입력하시오: ");
	 scanf("%d",&n);

	 for(i=2;i<=n;i++)
	 {
       if(n%i==0)
		 {  t=i; 
	        break; }

	   else 
		   continue;
	 }

	 if(t==n)
		 printf("입력하신 정수는 소수입니다.\n");
	 else 
		 printf("입력하신 정수는 소수가 아닙니다.\n");

	 return 0;
}

