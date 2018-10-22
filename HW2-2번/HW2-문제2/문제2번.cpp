#include<stdio.h>

int main (void)
{
	int n;
	int i=0;
	int m=0;

while(i<10)
{
	printf("정수를 입력하시오: ");
	scanf("%d",&n);
    m+=n;
	i++;
}

printf("입력하신 정수들의 합은 %d 입니다.\n",m);

return 0; 

}