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
  printf("�� ���� ������ �Է��Ͻÿ�: ");
  scanf("%d %d",&a,&b);
  printf("�� ���� ���� ���̿� �ִ� �Ҽ��� ");
  findPrime(a,b); 
  printf("�Դϴ�.\n");
  return 0;
}