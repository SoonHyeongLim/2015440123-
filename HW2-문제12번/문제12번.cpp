#include<stdio.h>

int main (void)
{
	int i,n;
	int j=0;
	
	printf("0�� �ԷµǸ� ����˴ϴ�.\n");
  
	for(i=0; ;i++)
  { 
	  printf("������ �Է��Ͻÿ�: ");
	  scanf("%d",&n);

	  if(n!=0)
	  {
		if(j<n)
		j=n;
	  }
	  else 
	  break;
	}
	printf("�Է��Ͻ� ������ �� ���� ū ���� %d �Դϴ�.",j);
	return 0;
}
