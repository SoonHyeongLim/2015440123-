#include<stdio.h>
int main (void)
{
	int n,i;
	int t=0;

     printf("������ �Է��Ͻÿ�: ");
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
		 printf("�Է��Ͻ� ������ �Ҽ��Դϴ�.\n");
	 else 
		 printf("�Է��Ͻ� ������ �Ҽ��� �ƴմϴ�.\n");

	 return 0;
}

