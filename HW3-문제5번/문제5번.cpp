#include<stdio.h>
void findNineninedan ( int b )
{
	int i;

	for(i=1 ; i<=9 ; i++)
		printf(" %d x %d = %d\n",b,i,b*i);

}

int main (void)
{
	int a;
  printf("�� ���� ����ұ��? : ");
  scanf("%d",&a);
  findNineninedan(a);
  return 0;
}





