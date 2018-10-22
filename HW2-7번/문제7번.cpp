#include<stdio.h>
int main (void)
{
	int i; 
    int n=0;
	int j=1;

	printf("0이 입력하면 종료됩니다.\n");
	
	while(j!=0 )
	{
       printf("정수를 입력하시오: ");
	   scanf("%d",&i);
	   n+=i;
	   j=i;

	   if(i==0){
		   printf("입력하신 정수들의 합은 %d 입니다.",n);
		   break;
	   }
	   else
		   continue;
	   }
	   return 0;
	}

