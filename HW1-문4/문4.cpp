#include <stdio.h>

int main (void)
{
	int n;

	printf("����(����)�� �Է� �޾Ƽ� ���(A, B, C, D, E)�� ����ϴ� ���α׷�\n");
	printf("������ �Է��Ͻÿ�. ");
	scanf("%d",&n);

	if(n>79&&n<101)
         printf("����� ����� A�Դϴ�.");
	else if(n>59&&n<80 )
         printf("����� ����� B�Դϴ�.");
	else if(n>39&&n<60)
         printf("����� ����� C�Դϴ�.");
	else if(n>19&&n<40 )
         printf("����� ����� D�Դϴ�.");
	else 
		 printf("����� ����� E�Դϴ�.");

	return 0;
}
