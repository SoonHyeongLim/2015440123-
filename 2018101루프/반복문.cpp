#include <stdio.h>
int main(   ) 
{

	//int count = 1; //루프변수 초기화 


	/*while ( count<=10 ) {  //조건문 이 참일 때 반복 조건
	printf("count=%d\n",count);
	count++;
	}
	printf("프로그램 종료 !!!!!!\n");*/

	//int count =1;
	//while(count <= 10)
	//	printf("count=%d\n", count++);

	//1에서부터 100까지 3의 배수만 화면에 출력 
	//int count =1; 
	//while(count<=100) {
	//	if(count%3==0) 
	//   printf("count = %d\n",count);
	//      count++;
	//}

	//1에서부터 100까지 3의 배수만 화면에 출력 
	/*int count =1; 
	while(count<=100) {
		if(count%3!=0) 
			printf("count = %d\n",count);
		count++; //if문은 한문장이 넘어가면 {를 쳐줘야한다. 
	}*/
	/*int count =1; 
	while(count<=100) {
		if(count%3==0) 
			printf("");  
		else 
			printf("count = %d\n",count);

		count++; //if문은 한문장이 넘어가면 {를 쳐줘야한다. 
	}*/
	
	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램 
	//위의 반복을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다. 
	/*
	int input;
	while (1) {
		printf("정수를 입력하세요:");
		scanf("%d",&input);
		
		if (input == 100 )
			break;

		if(input >= 1000) {
			printf("입력한 정수가 1000보다 큽니다. 다시 입력해주세요.\n");
			continue;
		}

		if (input%3 ==0)
		      printf("입력한 정수 %d는 3의 배수입니다.\n",input); 
		else
			 printf("입력한 정수 %d는 3의 배수가 아닙니다.\n",input);
	*/
	int sum = 0; int i=1;
	while(i<=100) {
		//sum = sum + i;
		//i++;
		//sum = sum + i++;
		sum += i++;
	
	}
	printf("the sum is %d\n",sum);



	return 0;
	













} //ctrl ] -> 괄호로 이동함 
//ctrl a ( 전체 선택 ) ctrl k + ctrl f 소스코드 선택영역을 예쁘게 포맷한다.
// ctrl k + ctrl c 선택한 영역 comment out , ctrl k + ctrl u 선택한 영역 undo comment out 


