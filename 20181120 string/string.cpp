#include<stdio.h>
#include<string.h>

void printArray (char*arr,int length)
{ 
	for(int count=0;count<length;count++)
		printf("arr[%d]=%c\n",count,arr[count]);

}

int main() {

char c; //character : ���ں��� ������ Ȱ������ �� ���� ��� , character(����)�� 
c='A'; //c�� A�� �ƽ�Ű �ڵ尡 ������ �ȴ�. 
printf("c=%d\n",c); //�ƽ�Ű �ڵ� ���ڰ� ��� 
printf("c=%c\n",c); // ���� 'A'�� ��� �ȴ�. 


char a[] = {'h','e','l','l','o'};
printArray(a,5);


//���ڿ� (STRING)

char b[] = "hello"; //==> char b[] = { 'h','e','l','l','o'.'\0' }
printf("%s \n",b);  
printArray(b,strlen(b));

printf("the length of the string is %d \n",strlen(b)); //strlen : ���ڿ��� ���̸� ����(null���ڸ� ������) 
                                                       // �迭�� ���̴� �Ű������� ����...
 char str1[50] = "hello";
 char* str2 = " world";
 //printf("%s \n",strcat(str1,str2)); //strcat�� str1 �� str2�� �Է� [ ] �ȿ� ���̸� �Է����� ������ ������ ����. 

 strcat(str1,str2);
 printf(" %s \n ",str1);
 strcpy(str1,str2); //str1�� str2 �� �ִ� ���ڿ��� �����Ѵ�. 
 printf(" %s \n ", str1);


return 0;
} 
