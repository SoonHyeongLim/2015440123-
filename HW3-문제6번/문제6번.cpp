#include<stdio.h>
 //void makeEven (int a) 
 //{  // 4=2+2,6=3+3,8=3+5,10=7+3,12= //골든바흐 추측! 
	// int j;
	// int t;
	// int k;
	// int f;

	// if(a==2)
	// printf("2");
	// else 
	// {
	//	 for(t=0;t<= ;t++)
	//	 {
	//		 for(k=0;k<= ;k++)
	//		 {    
	//			 f=a[t]+a[k];
	//			 if(
	//			 



	//		 }
	// }
 //}

 int makePrime (int b)
 {
	 int i;
	 int j;
	 int arr[10000];
     int t=0;

	 for(i=2;i<=b;i++)
	 {
		 if(b%2==0 )
		 { arr[t]=b;
		   t++;
		   break;
		 }
		if(i==b);
		break;

	 } 
	 return arr[b];
  }

int main (void) 
{   int n;
	printf("짝수를 입력하세요: ");
	scanf("%d",&n);
    
	while(n%2!=0)
	{
		printf("다시 입력하세요: ");
		scanf("%d",&n);
	}
  printf("배열은");
  printf(" %d ",makePrime(n));

 return 0;
}