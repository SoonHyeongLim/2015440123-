#include<stdio.h>

int main (void)
{
	int m,d;
	int k=31;
	int f=28;
	int t=30;

	printf("month �� day�� �Է��ϼ���(month,day): ");
	scanf("%d %d",&m,&d);
	
	if(m>12)
	  {
		  printf("�ٽ� �Է��Ͻÿ�(month,day): ");
		  scanf("%d %d",&m,&d);
	  }

	printf("1�� 1�Ϻ��� �Է��Ͻ� ��¥������ ��");
	
	switch(m)
	{
		case(1): 
			printf("%d���Դϴ�.\n",d);
			break;
        case(2):
			printf("%d���Դϴ�.\n",d+k);
			break;
        case(3):
			printf("%d���Դϴ�.\n",d+k+f);
			break;
        case(4):
			printf("%d���Դϴ�.\n",d+2*k+f);
			break;
	    case(5):
			printf("%d���Դϴ�.\n",d+2*k+f+t);
			break;
		case(6):
			printf("%d���Դϴ�.\n",d+3*k+f+t);
			break;
		case(7):
			printf("%d���Դϴ�.\n",d+3*k+f+2*t);
			break;
		case(8):
			printf("%d���Դϴ�.\n",d+4*k+f+2*t);
			break;
		case(9):
			printf("%d���Դϴ�.\n",d+5*k+f+2*t);
			break;
		case(10):
			printf("%d���Դϴ�.\n",d+5*k+f+3*t);
			break;
		case(11):
			printf("%d���Դϴ�.\n",d+6*k+f+3*t);
			break;
		case(12):
			printf("%d���Դϴ�.\n",d+6*k+f+4*t);
			break;
	}
	  return 0;
}
