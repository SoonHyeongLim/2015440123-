#include<stdio.h>
int main(void)
{
	int n,i,j,k;

	printf("정수를 입력하시오: ");
    scanf("%d",&n);
	k=0;

	for(i=1;i<=n;i++)
	{   
		for(j=1;j<=i;j++)
		{	if(i%j==0 && j!=1)
				   break;
		    else
				continue;
		}
      if(i==j)
		 k+=i; 
	} 
	printf("입력하신 정수까지의 소수의 합은 %d 입니다.",k);
	return 0;
}

