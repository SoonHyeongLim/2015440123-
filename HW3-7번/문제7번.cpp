//7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�
#include<stdio.h>

/* void printSum(int arr[],int len)
   for(i=0;i<len;i++)
	    sum+=a[len];
   printf("the sum is %d\n",sum);

		int main () {
	int a[4]={10,20,30,40};
	int length = 4;
		*/

//�Լ��̸�: addArray()
//�Է�: �迭
//���: �迭 �� ��ҵ��� ��
//�μ�ȿ��: ���� 

int addArray(int arr[],int length) {
	int sum=0,index =0;

	while (index < length )
		sum += arr[index++];
	return sum;
}

 int main() {
	 int a[4]={10,20,30,40};
	 int length = 4;

		printf("�����迭�� ���� %d �Դϴ�.\n",addArray(a,4));
		return 0;
 }