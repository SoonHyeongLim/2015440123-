#include<stdio.h>
int main () {
	int a=10;           // 1. ���� ���� + ���� �ʱ�ȭ  
	int*ptr;            // 2. �����ͺ��� ���� 
	ptr=&a;             // 3. &a --> "address of" a, ���� a�� �ּ� 
   *ptr=20;             // 4. *ptr --> "data of" ptr, ������ ���� ptr�� ����Ű�� ���� ������ 
	printf("a=%d\n",a); // 5. 
	return 0; 
}

