#include<stdio.h>

void swap(int*ptr1 , int*ptr2) { //�����͸� �Ű������� �����ϴ� ���� call by pointer �̶� �Ѵ�.  
	 int temp; // 4.�ӽú��� temp�� �ʿ��ϴ�.
     		temp=*ptr1; //
			*ptr1=*ptr2; //ptr1�� ���� ��� , 
	     	*ptr2=temp;
}

int main() {
	int a=100,b=200; //9. a��� ������ 100 ,b��� ������ 200 ���� �ְ� �ʱ�ȭ 
	//swap : ���� a,b�� ���� �ٲ۴�.
	    
	swap(&a,&b); // &a , &b -->a�� �ּҸ� �Է½����־���(ptr1 ,ptr2�� ���Եȴ�.) step 1. a�� �ּ� ���� ������ 
	             //                                                              step 2. b�� �ּ� ���� ������ 
	printf("a=%d, b=%d\n",a,b);

	return 0;
}