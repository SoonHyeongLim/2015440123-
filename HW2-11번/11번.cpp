#include<stdio.h>
int main (void)
{
	int i,j,n;

	printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

  while(1) 
  {
	  printf("������ �Է��Ͻÿ�: ");
	  scanf("%d",&n); 

	  if(n==0)
		  break;

	  else
	  {  
		  printf("�Է��Ͻ� ���� �μ���");
		 
		  for(i=1;i<=n;i++)
		  {  
			   if(n%i==0)
		       printf(" %d ",i);
		  }
		  printf("�Դϴ�.\n");
	  }
  }
  return 0;
}