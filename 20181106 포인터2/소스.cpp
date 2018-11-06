#include<stdio.h>
void test (int a) {
	a=100; //100이 저장된 후에 저장 공간이 소멸이 된다. , test 함수에서 만든 a (단순히 test에서 값만 입력된 함수)
}

void testPointer(int*ptr){
	*ptr = 100;
}

int main () {
   int a=10;   // 6.main 함수 에서 만든 a  
 test(a); // 7. test 함수를 거치고 난 뒤에 변수의 저장공간이 소멸한다.     
 printf("a=%d\n",*&a); // a에는 10이 출력된다.

 //포인터를 매개변수값으로 전달 
 testPointer(&a); // 포인터 변수를 위한 공간 생성 -> a의 주소가 입력된다.(함수 내부에서 접근이 가능)
 printf("a=%d\n",a); //값이 아니라 testpointer함수내부에서 main함수의 a에 접근을 할 수 있게 된다.

 return 0;  
}



