#include<stdio.h>
int main (void)
{
	int i,j; 

   printf("1���� 9������ ���� �Է��ϼ���: ");
   scanf("%d",&i);

   for(j=1;j<10;j++)
	   printf("%d x %d = %d\n",i,j,i*j);

   return 0;
}