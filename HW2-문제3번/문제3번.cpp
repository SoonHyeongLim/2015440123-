#include<stdio.h>

int main (void)
{
	int i=0;
	int n=0;
		 
	while(i<100)
	{

		if(i%3==0) {
			n+=i;
			i++;
		}
		else 
			i++;
	}
	printf("100이하의 3의배수의 합은 %d 입니다.",n); 

	return 0;
}

