#include<stdio.h>
#include<string.h>

void printArray (char*arr,int length)
{ 
	for(int count=0;count<length;count++)
		printf("arr[%d]=%c\n",count,arr[count]);

}

int main() {

char c; //character : 숫자보다 문자의 활용으로 더 많이 사용 , character(문자)형 
c='A'; //c에 A의 아스키 코드가 저장이 된다. 
printf("c=%d\n",c); //아스키 코드 숫자가 출력 
printf("c=%c\n",c); // 문자 'A'가 출력 된다. 


char a[] = {'h','e','l','l','o'};
printArray(a,5);


//문자열 (STRING)

char b[] = "hello"; //==> char b[] = { 'h','e','l','l','o'.'\0' }
printf("%s \n",b);  
printArray(b,strlen(b));

printf("the length of the string is %d \n",strlen(b)); //strlen : 문자열의 길이를 말함(null문자를 제외한) 
                                                       // 배열의 길이는 매개변수에 없다...
 char str1[50] = "hello";
 char* str2 = " world";
 //printf("%s \n",strcat(str1,str2)); //strcat은 str1 에 str2에 입력 [ ] 안에 길이를 입력하지 않으면 오류가 난다. 

 strcat(str1,str2);
 printf(" %s \n ",str1);
 strcpy(str1,str2); //str1에 str2 에 있는 문자열을 복사한다. 
 printf(" %s \n ", str1);


return 0;
} 
