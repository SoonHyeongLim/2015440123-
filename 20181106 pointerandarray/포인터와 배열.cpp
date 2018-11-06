#include<stdio.h>

//printArray
//입력: 배열
//출력: 없음
//부수효과: 화면에 배열의 값을 출력 
void printArray(int arr[],int len) { //배열이 온다는 것을 [] 로 표현 
 	for(int index=0; index<len;index++) {
		printf("array[%d]= %d \n",index,arr[index]);
	}
}

int main () {
	int a[3]={10,20,30}; //배열의 선언: 배열이름: a , 배열길이: 3
	int*ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	ptr = a; //==> ptr = &a[0]; (배열을 곧장 사용하면 배열의 첫번째 요소의 주소)  
    printf("a[0] = %d\n",a[0]);
	printf("a[0] = %d\n",*ptr);

	printf("a[0] = %d\n",ptr[0]); //포인터 변수이름을 배열이름으로도 쓸 수 있다. 
	printf("a[1] = %d\n",ptr[1]);
	printf("a[2] = %d\n",ptr[2]);
	// printArray(a,3); //배열의 이름 a 가 들어간다. 

	return 0;
}
