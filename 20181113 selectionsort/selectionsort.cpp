#include<stdio.h>
void printArray (int*arr , int len )
{
	for(int index=0; index<len;index++) 
		printf("array[%d]= %d \n",index,arr[index]);
}

//�Լ� : findMinindex()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �ּڰ��� �ε��� 

int findMinindex(int*arr, int length)
{ 
	int minIndex;
	   int min=arr[0]; 
	for(int count=0;count<length; count++){
    
		if(min>=arr[count]){
	       minIndex=count;
		}
	}
	return minIndex;
}

//�Լ� : findMin() 
//�Է� : �迭(�迭�̸� , �迭 ����)
//���: �迭 �ּڰ� 
int findMin ( int* arr , int length )
{   int min=arr[0]; 
	for(int count=0;count<length; count++){
     if(min>arr[count])
		 min = arr[count];
	}
	return min;
} //  
//�Լ�: swapElement()
//�Է�: �迭, �ΰ��� �ε��� 
//���: ����
//�μ�ȿ��: �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j ) {
	int temp;
    temp= arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
//�Լ�: selectionSort()
//�Է�: �迭 
//���: ���� 
//�μ�ȿ��: �迭�� ���ĵ� 
void selectionSort(int*arr, int length) {
	int i=0;
	int j=0;
  





	}
     
int main() { 
	int a[] = {30,35,27,15,40};
      	
	printf("minimum value of the array is %d\n", findMin(a,5));
	printf("minimum index = %d\n",findMinindex(a,5)); 
	//swapElement(a,0,3);
	selectionSort(a,5);
	printArray(a,5);
};