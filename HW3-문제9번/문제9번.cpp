#include<stdio.h>
int returnMaxindex ( int arr[],int length )
{ 
	int j=0;
	int index=0;
	int t=0;

	for(index=0;index<5;index++)
	{
		if(j<=arr[index])
		{	j=arr[index];
		t= index; }
		else 
			continue;
	}
	return t;
}

int main (void)
{
	int arr[]={10,20,30,100.23};
	int length=5;

	printf("�ִ��� ���� �迭�� index�� %d �Դϴ�.\n",returnMaxindex(arr,5));

   return 0;
}


