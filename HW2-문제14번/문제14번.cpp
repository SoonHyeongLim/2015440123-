#include<stdio.h>
int main (void)
{
	int n,i;
	int j=0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&n);

	 while(n<7)
	 {
		 printf("������ �ٽ� �Է��Ͻÿ�: ");
		 scanf("%d",&n);
	 }

	for(i=7;i<=n;i++) 
		j+=i;

	printf("7���� �Է��Ͻ� ������ ���� %d �Դϴ�.\n",j);
	return 0;
}
