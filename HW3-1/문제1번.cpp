//1. �� ���� ���̿� ��� �������� ������� ����ϴ� ���� 
#include<stdio.h>
//�Լ� printNumber
//�Է� : �� ���� 
// ��� : ���� 
// �μ�ȿ�� ���� 

void printNumber (int a,int b) {
	int count =a;
	while(count<=b)
		printf("%d\n",count++);
}


int main (void)
{
	int a =3, b=50;
	printNumber(a,b);
	printNumber(-20,100);

	printf("���α׷� ����\n");

	return 0;
}


