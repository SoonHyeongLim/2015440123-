#include<stdio.h>
int main (void)
{
	int i,j,n;

	printf("0을 입력하면 프로그램이 종료됩니다.\n");

  while(1) 
  {
	  printf("정수를 입력하시오: ");
	  scanf("%d",&n); 

	  if(n==0)
		  break;

	  else
	  {  
		  printf("입력하신 수의 인수는");
		 
		  for(i=1;i<=n;i++)
		  {  
			   if(n%i==0)
		       printf(" %d ",i);
		  }
		  printf("입니다.\n");
	  }
  }
  return 0;
}