#include<stdio.h>
int main (void)
{
	int i,j;
	printf("������ �Է��ϼ���: ");
	scanf("%d",&j);
	printf("�Է��Ͻ� ������ �μ��� ");

	for(i=1;i<=j;i++)
	{ 
  if(j%i==0) 
	  printf(" %d ",i);
  else
      continue;
	}
	printf("\n");
	return 0;
}