#include<stdio.h>
int main (void)
{
	int i,j; 
	printf("1���� 9������ ���� �Է��ϼ���: ");
       scanf("%d",&i);
   while(i!=0)
   {
	   if(i<10 && i>=0)
        {
			for(j=1;j<10;j++)
	        printf("%d x %d = %d\n",i,j,i*j);
			break;
        }
       else 
	   {
			 printf("�����Դϴ�!!!!!!!!\n");
             printf("1���� 9������ ���� �ٽ� �Է��ϼ���: ");
             scanf("%d",&i);
			 continue;
        }
   }
   return 0;
}