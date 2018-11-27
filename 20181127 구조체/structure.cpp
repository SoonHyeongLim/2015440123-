#include<stdio.h>
//����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.

//������ Ÿ���� ���� ����
/*
struct complex {
	double real; // �ɹ� ����(member variable) 
	double imag; // ��(ditto) 
}; 
// ����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.  
// ������ �ִ� ��(���� ���)�� Ȱ���Ͽ� ���ο� ������ Ÿ���� �����. 

typedef struct complex Complex; // �ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.
typedef int myIntType; //�ڷ��� "int"�� ������ "myIntType"��� �θ��ڴ�.
*/
typedef struct complex {
	double real;
	double imag;
}Complex;

typedef int myIntType; 

//�Լ� : printComplex()
//�Է� : ���Ҽ� 
//��� : ���� 
//�μ�ȿ�� : ���� 

void printComplex (Complex* ptr) { //��κ��� ���, ����ü �����͸� �Ű������� ���� �޴´�.
	printf("%f + j%f\n",ptr->real,ptr->imag);
}

//�Լ� : conjugate()
//�Է� : ���Ҽ� ������ 
//��� : ���� 
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��(�Է��� �ٲ��.)

void convertToConjugate (complex*ptr){ 
	ptr->imag=-1*ptr->imag;
	printf("%f + j%f\n",ptr->real,ptr-> imag);
}

Complex returnConjugate (complex*ptr) { 
	   Complex temp; 
	 temp.real = ptr -> real; temp.imag = -1*ptr -> imag;
	return temp;
}

//�Լ� : returnConjugate
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ���� 
//�μ�ȿ�� : ����


	int main( ) 
	{   
		//myIntType count=10;//==> int count = 10; 
		//����ü ���� ���� 
		Complex a,b; //==>struct complex a; 
		a.real = 10; // ����ü ������ ������� ���ٹ�� ==> ����ü ���� �̸�. �ɹ� ���� �̸�
		a.imag = 20; // 
		printComplex(&a); 
		printf("%f + j%f\n", a.real, a.imag);
  
		//����ü ������ ���� ���� 
		Complex*ptr;
		ptr=&a;
		ptr -> real =100; //����ü ������ ������ ��� ���� ���� ��� ==> ����ü ���� �̸� -> ��� ���� �̸� 
		ptr -> imag= 200; 
		printComplex(&a); // �Լ��� ����ü�� ���� ��, ����ü�� ������ ������ ������.
		/*
		convertToConjugate(&a);
		printComplex(&a);
		*/
		b= returnConjugate(&a); printComplex(&b);
		convertToConjugate(&a); printComplex(&a);

		return 0;
	 }
	





