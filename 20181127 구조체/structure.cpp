#include<stdio.h>
//구조체 선언 : 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.

//데이터 타입의 별명 선언
/*
struct complex {
	double real; // 맴버 변수(member variable) 
	double imag; // 상동(ditto) 
}; 
// 구조체 선언은 반드시 세미콜론으로 끝내야 한다.  
// 기존의 있는 것(구성 요소)을 활용하여 새로운 데이터 타입을 만든다. 

typedef struct complex Complex; // 자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.
typedef int myIntType; //자료형 "int"를 앞으로 "myIntType"라고도 부르겠다.
*/
typedef struct complex {
	double real;
	double imag;
}Complex;

typedef int myIntType; 

//함수 : printComplex()
//입력 : 복소수 
//출력 : 없음 
//부수효과 : 없음 

void printComplex (Complex* ptr) { //대부분의 경우, 구조체 포인터를 매개변수로 전달 받는다.
	printf("%f + j%f\n",ptr->real,ptr->imag);
}

//함수 : conjugate()
//입력 : 복소수 포인터 
//출력 : 없음 
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨(입력이 바뀐다.)

void convertToConjugate (complex*ptr){ 
	ptr->imag=-1*ptr->imag;
	printf("%f + j%f\n",ptr->real,ptr-> imag);
}

Complex returnConjugate (complex*ptr) { 
	   Complex temp; 
	 temp.real = ptr -> real; temp.imag = -1*ptr -> imag;
	return temp;
}

//함수 : returnConjugate
//입력 : 복소수 포인터
//출력 : 복소수 변수 
//부수효과 : 없음


	int main( ) 
	{   
		//myIntType count=10;//==> int count = 10; 
		//구조체 변수 선언 
		Complex a,b; //==>struct complex a; 
		a.real = 10; // 구조체 변수의 멤버변수 접근방법 ==> 구조체 변수 이름. 맴버 변수 이름
		a.imag = 20; // 
		printComplex(&a); 
		printf("%f + j%f\n", a.real, a.imag);
  
		//구조체 포인터 변수 선언 
		Complex*ptr;
		ptr=&a;
		ptr -> real =100; //구조체 포인터 변수의 멤버 변수 접근 방법 ==> 구조체 변수 이름 -> 멤버 변수 이름 
		ptr -> imag= 200; 
		printComplex(&a); // 함수에 구조체를 던질 때, 구조체의 포인터 변수를 던진다.
		/*
		convertToConjugate(&a);
		printComplex(&a);
		*/
		b= returnConjugate(&a); printComplex(&b);
		convertToConjugate(&a); printComplex(&a);

		return 0;
	 }
	





