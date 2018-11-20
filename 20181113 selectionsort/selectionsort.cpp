#include<stdio.h>
void printArray (int*arr , int len )
{
	for(int index=0; index<len;index++) 
		printf("array[%d]= %d \n",index,arr[index]);
}

//함수 : findMinindex()
//입력 : 배열(배열이름, 배열길이)
//출력 : 최솟값의 인덱스 

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

//함수 : findMin() 
//입력 : 배열(배열이름 , 배열 길이)
//출력: 배열 최솟값 
int findMin ( int* arr , int length )
{   int min=arr[0]; 
	for(int count=0;count<length; count++){
     if(min>arr[count])
		 min = arr[count];
	}
	return min;
} //  
//함수: swapElement()
//입력: 배열, 두개의 인덱스 
//출력: 없음
//부수효과: 배열의 두 인덱스 element가 바뀐다.
void swapElement(int* arr, int i, int j ) {
	int temp;
    temp= arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
//함수: selectionSort()
//입력: 배열 
//출력: 없음 
//부수효과: 배열이 정렬됨 
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