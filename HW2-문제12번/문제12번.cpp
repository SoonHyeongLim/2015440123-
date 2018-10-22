#include<stdio.h>

int main (void)
{
	int i,n;
	int j=0;
	
	printf("0이 입력되면 종료됩니다.\n");
  
	for(i=0; ;i++)
  { 
	  printf("정수를 입력하시오: ");
	  scanf("%d",&n);

	  if(n!=0)
	  {
		if(j<n)
		j=n;
	  }
	  else 
	  break;
	}
	printf("입력하신 정수들 중 가장 큰 수는 %d 입니다.",j);
	return 0;
}
