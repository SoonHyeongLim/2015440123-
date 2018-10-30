#include<stdio.h>
//함수 printArray 
//입력: 배열 
//출력: 없음
// 부수효과: 화면에 모든 요소를 출력

void printArray(int arr[],int length) { //     (배열이름 [] , 배열길이) : 함수 자체에 입력하는 값이 없음(void) 
    int count =0;                       //                              : 출력 되는 형태는 arr 와 len 이 출력된다.
	while(count<length) { 
		printf("a[%d] = %d\n", count, arr[count]); //변수를 index로 사용할 수 있다. 
		count++; 
	}
}

int main ( ) {
	int len=4;
	//배열 선언 
	// 1. 배열의 이름: a 
	// 2. 요소의 자료형 : int 
	// 3. 배열의 길이: 4 

	//int a[4]; //배열 선언 
	//
	//a[0] = 20; //literal을 index으로 사용
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000; 
	
	int a[4]= {2,20,200,2000}; //배열 선언과 동시에 초기화 방법 
	/*
	int arr[] = {3,30,300}; // 길이 3의 배열 생성 
	int count =0;
	while(count<len) { 
		printf("a[%d] = %d\n", count, a[count]); //변수를 index로 사용할 수 있다. 
		count++;  */

	printArray(a,len); //배열을 매개변수로 ( 배열의 이름 a, 배열의 길이 len )
 
 return 0;
}
	//배열을 매개변수로 함수에 던지는 방법 
 




















