#include<stdio.h>

void swap(int*ptr1 , int*ptr2) { //포인터를 매개변수로 전달하는 것을 call by pointer 이라 한다.  
	 int temp; // 4.임시변수 temp가 필요하다.
     		temp=*ptr1; //
			*ptr1=*ptr2; //ptr1이 저장 장소 , 
	     	*ptr2=temp;
}

int main() {
	int a=100,b=200; //9. a라는 공간에 100 ,b라는 공간에 200 값을 넣고 초기화 
	//swap : 변수 a,b의 값을 바꾼다.
	    
	swap(&a,&b); // &a , &b -->a의 주소를 입력시켜주었음(ptr1 ,ptr2로 가게된다.) step 1. a의 주소 값이 포인팅 
	             //                                                              step 2. b의 주소 값이 포인팅 
	printf("a=%d, b=%d\n",a,b);

	return 0;
}