#include<stdio.h>
int main (void)
{
	int i; 
    int n=0;
	int j=1;

	printf("0�� �Է��ϸ� ����˴ϴ�.\n");
	
	while(j!=0 )
	{
       printf("������ �Է��Ͻÿ�: ");
	   scanf("%d",&i);
	   n+=i;
	   j=i;

	   if(i==0){
		   printf("�Է��Ͻ� �������� ���� %d �Դϴ�.",n);
		   break;
	   }
	   else
		   continue;
	   }
	   return 0;
	}

