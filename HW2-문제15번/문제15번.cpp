#include<stdio.h>
int main (void)
{
	int n=49;
	int i,j;

	for(i=0;i<10;i++)
	{
		printf("n은 얼마일까요??: ");  
	    scanf("%d",&j);

		if(n<j)
		 printf("입력하신 수보다 큽니다.\n");

		else if(n>j) 
		printf("입력하신 수보다 작습니다.\n");
	
		else
		{ printf("정답입니다!!!!!");
		break;}
	}

	if(i==10)
		printf("GAME OVER!!!!! 당신의 머리는 딸립니다!");

	return 0;
}

