#include<stdio.h>
int main (void)
{
	int i,j; 
	printf("1에서 9까지의 수를 입력하세요: ");
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
			 printf("에러입니다!!!!!!!!\n");
             printf("1에서 9까지의 수를 다시 입력하세요: ");
             scanf("%d",&i);
			 continue;
        }
   }
   return 0;
}