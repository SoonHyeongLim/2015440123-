//7. 정수 배열의 합을 반환하는 함수
#include<stdio.h>

/* void printSum(int arr[],int len)
   for(i=0;i<len;i++)
	    sum+=a[len];
   printf("the sum is %d\n",sum);

		int main () {
	int a[4]={10,20,30,40};
	int length = 4;
		*/

//함수이름: addArray()
//입력: 배열
//출력: 배열 각 요소들의 합
//부수효과: 없음 

int addArray(int arr[],int length) {
	int sum=0,index =0;

	while (index < length )
		sum += arr[index++];
	return sum;
}

 int main() {
	 int a[4]={10,20,30,40};
	 int length = 4;

		printf("정수배열의 합은 %d 입니다.\n",addArray(a,4));
		return 0;
 }