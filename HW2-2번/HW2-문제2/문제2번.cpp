#include<stdio.h>

int main (void)
{
	int n;
	int i=0;
	int m=0;

while(i<10)
{
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&n);
    m+=n;
	i++;
}

printf("�Է��Ͻ� �������� ���� %d �Դϴ�.\n",m);

return 0; 

}