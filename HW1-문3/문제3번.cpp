#include <stdio.h>

int main(void)
{
	int a,b,c;

	printf("�� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.\n");
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%d",&a);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf("%d",&b);
	printf("����° ������ �Է��Ͻÿ�: ");
	scanf("%d",&c);

	 if(a/b>=1 && a/c>=1)
		 printf("���� ū ���� %d�Դϴ�\n",a);


	 else if (b/a>=1 && b/c>=1)
		 printf("���� ū ���� %d�Դϴ�\n",b);


	 else
		 printf("���� ū ���� %d�Դϴ�\n",c);

	 return 0;
}

