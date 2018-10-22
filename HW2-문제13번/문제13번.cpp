#include<stdio.h>

int main (void)
{
	int m,d;
	int k=31;
	int f=28;
	int t=30;

	printf("month 와 day를 입력하세요(month,day): ");
	scanf("%d %d",&m,&d);
	
	if(m>12)
	  {
		  printf("다시 입력하시오(month,day): ");
		  scanf("%d %d",&m,&d);
	  }

	printf("1월 1일부터 입력하신 날짜까지는 총");
	
	switch(m)
	{
		case(1): 
			printf("%d일입니다.\n",d);
			break;
        case(2):
			printf("%d일입니다.\n",d+k);
			break;
        case(3):
			printf("%d일입니다.\n",d+k+f);
			break;
        case(4):
			printf("%d일입니다.\n",d+2*k+f);
			break;
	    case(5):
			printf("%d일입니다.\n",d+2*k+f+t);
			break;
		case(6):
			printf("%d일입니다.\n",d+3*k+f+t);
			break;
		case(7):
			printf("%d일입니다.\n",d+3*k+f+2*t);
			break;
		case(8):
			printf("%d일입니다.\n",d+4*k+f+2*t);
			break;
		case(9):
			printf("%d일입니다.\n",d+5*k+f+2*t);
			break;
		case(10):
			printf("%d일입니다.\n",d+5*k+f+3*t);
			break;
		case(11):
			printf("%d일입니다.\n",d+6*k+f+3*t);
			break;
		case(12):
			printf("%d일입니다.\n",d+6*k+f+4*t);
			break;
	}
	  return 0;
}
