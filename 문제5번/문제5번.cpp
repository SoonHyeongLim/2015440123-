#include<stdio.h>
int main (void)
{
	int i; 
	int n=1;
	int j=0;

	printf("100������ 3�� ������� ���� ����ϴ� ���α׷��Դϴ�.\n");

	do  
	{
	  i=n%3;

     if(i==0)
	{	j+=n;
	     n++; }
	 else 
		 n++;
	     
	}while(n<=100);

		printf("3�� ������� ���� %d �Դϴ�.\n",j);

   return 0;
}