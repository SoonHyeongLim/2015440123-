#include<stdio.h>

int main (void)
{

	int n;

  printf("메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램입니다.");
  printf("choose one of the following.\n");
  printf("1.apple\n 2.orange\n 3.banana\n 4.peach\n");

  printf("enter your choice:");
  scanf("%d",&n);

  if(n==1)
	  printf("your choice is 'apple'");
  else if(n==2)
	  printf("your choice is 'orange'");
  else if(n==3)
	  printf("your choice is 'banana'");
  else if(n==4)
	  printf("your choice is 'peach'");
  else
	  printf("다시 입력하시오");	 

  return 0;

}
