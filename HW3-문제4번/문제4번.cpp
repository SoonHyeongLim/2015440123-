#include<stdio.h>
//���� 3�� �� ���� ���� ���� ��ȯ�ϴ� �Լ� 
int findSmallNumber (int a,int b,int c)
{ int i; 
  if(a<=b && a <= c)
	  i=a;
  else if (b <=a && b <=c) 
	  i=b;
  else 
	  i=c;
 return i;
}

int main (void)
{
	int a,b,c;
	printf("�� ���� ���� �Է��Ͻÿ�: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("�Է��Ͻ� ���ڵ� �߿��� ���� ���� ���ڴ� %d �Դϴ�.\n",findSmallNumber(a,b,c));
	return 0;
}
