#include<stdio.h>

int main (void)
{
	char n[100];

  printf("메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램입니다.");
  printf("choose one of the following.\n");
  printf(" apple\n orange\n banana\n peach\n");

  printf("enter your choice:");
  scanf("%s",n);

  printf("your choice is %s",n);

  return 0;

} //올려주신 자료에서 제10강 문자와 문자열 을 보고 만들어보았습니다. 


