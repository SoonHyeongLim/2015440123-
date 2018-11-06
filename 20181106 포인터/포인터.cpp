#include<stdio.h>
int main () {
	int a=10;           // 1. 변수 선언 + 변수 초기화  
	int*ptr;            // 2. 포인터변수 선언 
	ptr=&a;             // 3. &a --> "address of" a, 변수 a의 주소 
   *ptr=20;             // 4. *ptr --> "data of" ptr, 포인터 변수 ptr이 가리키는 곳의 데이터 
	printf("a=%d\n",a); // 5. 
	return 0; 
}

