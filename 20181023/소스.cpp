#include<stdio.h>

int gVar = 100; //gloval variable : 모든 함수에 다 적용이 되는 변수 (전역변수)
/* today's topic

1. 함수(function) 
  - 요약화(abstraction) -1. 목적(목적에 의해 필요한 성분은 챙기고 나머지는 버린다!)  
                         2. 요약 (절차적 요약화 | 함수) , (선언적 요약화 | 구조체!! )
*/
// 함수 sum() 
// 입력:  두 정수 
// 출력 : 두 정수의 합 
// 부수효과 : 없음 

int sum (int a,int b) { //함수 선언 : 1. sum()은 함수의 이름이다.,2. 매개변수의 갯수(2개) 
	                    //3.각 매개변수의 자료형(int,int) 4. 반환값의 자료형(반환형)-int  
                       	//함수 호출을 위해 필요한 정보 ; //c=a+b+x 이런 식으로 쓰면 x는 함수 안에 없는 변수이기 때문에 인식을 할 수 없다.(밑의 함수의 x와 위의 함수 x의 범위는 다르다)
	static int c=0;              // c는 지역변수
    c =a+b; a=100; // gVar 을 쓰면 코드를 해석하기 어려워진다.
	               
	return c;//함수 본체 

}           // 함수 정의=함수 선언 + 함수 본체  
 

//함수 : goodPrint()
//입력: 없음
//출력: 없음 
//부수효과:화면에 good 출력 

void goodPrint() {
	printf("good\n");
}

int main () {

	int x =10, y=20, z; 
	z=sum(x,y);    // 함수 호출 ,

	printf("z= %d ,x=%d\n",z,x); //함수 안에서는 다른 함수 안의 다른 변수를 access 할 방법이 없다. 
	goodPrint();

	return 0;
}










