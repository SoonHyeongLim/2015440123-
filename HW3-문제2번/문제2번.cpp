#include<stdio.h>
int addNumber ( int a , int b ) {
	int i,r,t;
	int s=0;
	a<b? (r=a,t=b) : (r=b,t=a);

  for(i=r;i<=t;i++)
	  s+=i;
  return s;
}

int main (void) {
	int a,b; 
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d",&a,&b);
	printf("�� ���� ���� ������ ���� %d �Դϴ�.\n",addNumber(a,b));
	return 0;
}

