#include<stdio.h>
void findPrime (int a , int b)
{
	int t,r,i,s;
	a<b?(r=a,t=b):(r=b,t=a);

	for(i=r;i<=t;i++)
	{
	 for(s=2;s<=i;s++)
	  {  
		 if(i%s==0)
			 break;
		 else 
			 continue;
	  }
	 if(s==i)
      printf(" %d ",i);
	 else 
		 continue;
     }

}

int main (void)
{ 
  int a,b;
  printf("두 개의 정수를 입력하시오: ");
  scanf("%d %d",&a,&b);
  printf("두 개의 정수 사이에 있는 소수는 ");
  findPrime(a,b); 
  printf("입니다.\n");
  return 0;
}