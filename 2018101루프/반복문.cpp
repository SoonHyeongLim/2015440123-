#include <stdio.h>
int main(   ) 
{

	//int count = 1; //�������� �ʱ�ȭ 


	/*while ( count<=10 ) {  //���ǹ� �� ���� �� �ݺ� ����
	printf("count=%d\n",count);
	count++;
	}
	printf("���α׷� ���� !!!!!!\n");*/

	//int count =1;
	//while(count <= 10)
	//	printf("count=%d\n", count++);

	//1�������� 100���� 3�� ����� ȭ�鿡 ��� 
	//int count =1; 
	//while(count<=100) {
	//	if(count%3==0) 
	//   printf("count = %d\n",count);
	//      count++;
	//}

	//1�������� 100���� 3�� ����� ȭ�鿡 ��� 
	/*int count =1; 
	while(count<=100) {
		if(count%3!=0) 
			printf("count = %d\n",count);
		count++; //if���� �ѹ����� �Ѿ�� {�� ������Ѵ�. 
	}*/
	/*int count =1; 
	while(count<=100) {
		if(count%3==0) 
			printf("");  
		else 
			printf("count = %d\n",count);

		count++; //if���� �ѹ����� �Ѿ�� {�� ������Ѵ�. 
	}*/
	
	//Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷� 
	//���� �ݺ��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�. 
	/*
	int input;
	while (1) {
		printf("������ �Է��ϼ���:");
		scanf("%d",&input);
		
		if (input == 100 )
			break;

		if(input >= 1000) {
			printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է����ּ���.\n");
			continue;
		}

		if (input%3 ==0)
		      printf("�Է��� ���� %d�� 3�� ����Դϴ�.\n",input); 
		else
			 printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�.\n",input);
	*/
	int sum = 0; int i=1;
	while(i<=100) {
		//sum = sum + i;
		//i++;
		//sum = sum + i++;
		sum += i++;
	
	}
	printf("the sum is %d\n",sum);



	return 0;
	













} //ctrl ] -> ��ȣ�� �̵��� 
//ctrl a ( ��ü ���� ) ctrl k + ctrl f �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
// ctrl k + ctrl c ������ ���� comment out , ctrl k + ctrl u ������ ���� undo comment out 


