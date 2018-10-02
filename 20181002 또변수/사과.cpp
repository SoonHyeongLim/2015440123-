#include <stdio.h>

int main (void) {

	//문장 : ;으로 끝난다.
	int a;  //변수선언문 ( 자료형 변수 이름 ) 1. 변수의 이름 소개 2. 변수의 자료형 저장
	        // 1. a는 변수의 이름이다. 2. 변수 a의 자료형은 int이다.
	float ff; // 소수점 숫자(실수) 표현 

	/* // 대입문 : 우변의 "값"을 좌변의 저장장소로 이동(저장) 한다. 
	// 리터럴(literal) : 소스코드에서 특정한 자료형의 값을 직접 표현하는 방법. 
	// 예) 정수형: 10, 0xF3; 실수형: 3.14, 10f; 0.1E-5; 문자형: 'a', \n; 문자열: "Hello world"
	 a =10  0xA 

	*/
	a = 10 ;  // int ==>  자료형 , a==> 변수 이름 -2^(-16)<=a<= 2^(16)-1 의 정수 
	         // C언어에서는 변수를 사용하기 전에 반드시 변수선언을 해야한다.
	         
	         // 파란색은 예약된 단어를 의미한다.( reserved(key) word       
	//변수 : 메모리 저장장소의 이름 
	//자료형 : 변수가 가질 수 있는 값의 범위를 지정 

	int b = 20, c; // 변수선언 + 변수초기화(b는 20을 초기값으로 사용한다 

	//수식(expression): 연산자(operator , +)와 피연산자(operand a,b)들의 조합. 
	                   //모든 수식은 값을 반환(리턴)한다.  
	c= a+b;


	//대입연산자 
	a= b =c =100; // =은 대입연산자이다. 똑같은 연산자가 반복될 때, 왼쪽에서 부터 실행된다.  

	//증감연산자
	a = b++; //b++ : 반환값 ==> b , 부수효과 ==> b = b+1 문장이 끝날 때 a 값은 100, b는 101이 된다 .
  	//a -> 10 , b -> 11 
	
	b=10;
	a=++b; // ++b: 반환값 ==> b+1 , 부수효과 ==> b= b+1  
	//a -> 11 , b -> 11 

    //관계연산자 : <  >   <=  >=  ==  !=
	a= 10; b= 20;
	c = a < b; //  연산결과 참 c -> 1
	c = a > b; //  연산결과 거짓 c -> 0
	           // a=b(우변인 b의 값이 리턴) ,a == b(참 거짓에 따라 1 아니면 0 이 리턴) 

	//논리연산자 : &&(AND)  ||(OR)  !(NOT)
	//논리식의 결과가 참이면 1 거짓이면 0 ( 0이 아니면 무조건 참!)
	//C언어에서 논리연산자의 피연산자가 0이면 거짓, 0이 아니면 참으로 처리한다.
	
	a = 1 && 0;// a -> 0 
	a = 1 || 0;// a -> 1 
	a = 100 || 0; // a? a->1
	
	// 연산자 우선순위 ( operator prededence )
	a= 10 + 20 * 3 ;
	a= (1 || ((3 * 4) > 10));


	//연산자 결합방향( Associativity )
	a= 10 + 20 + 30; // L -> R 
                     // 대입연산자 , 단항연산자의 경우 R -> L 
	 
	// 조건문( Conditional statement )
	a = 10;

	// 조건문 시작
	if ( a == 10 ) {
		printf("a is ten\n" );
		printf("is this a real life\n" );
	}
    
	else 
		printf("a is not ten\n" );
	
	// 조건문 끝 

		// 조건문( Conditional statement ) - if else 
	a = 10;

	// 조건문 시작
	if ( a == 10 ) {
		printf("a is ten\n" );
		printf("is this a real life\n" );
	}
    
	else  if ( a==20) 
		printf("a is twenty\n" );
	else 
		printf("a is not ten\n");

	// if가 하나만 있어도 된다.
		a = 10;
	// 조건문 끝 

	printf("program end!\n");

	//키보드에서 입력받는 방법 
	printf("정수를 입력하시오 : \n");
	scanf("%d",&a);

	printf("입력받은 a = %d\n",a);
	printf("program end ! \n");
	
	//printf("a= %d\n",a);  // %d 십진수 , %x 16진수  

	return 0;
}