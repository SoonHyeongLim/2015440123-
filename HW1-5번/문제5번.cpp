#include<stdio.h>

int main (void)
{

	int n;

  printf("�޴��� ����ϰ�, ����ڷκ��� �Է��� �޾� ���õ� �޴��� ����ϴ� ���α׷��Դϴ�.");
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
	  printf("�ٽ� �Է��Ͻÿ�");	 

  return 0;

}
