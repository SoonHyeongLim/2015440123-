#include<stdio.h>
#include<stdlib.h>


//�Է� : ���Ḯ��Ʈ
//��� : ��� ������ ���(double)
// ����

typedef struct node {
	int score; 
	struct node*pNext;
}Node;

typedef struct linkedlist { 
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;








double averageLL (Node*ptr){
	double sum=0;
	double average=0;
	double count=0;

	while(ptr!=0){
		sum+=(ptr->score);
		count++;
		ptr=ptr->pNext;
	}
	average= sum / count;
	return average;
}

Node* returnTail (Node*ptr) {
	if(ptr == NULL) 
     return NULL; 

	while(ptr!=NULL) {
		if(ptr->pNext == NULL)
			return ptr; 
        ptr=ptr->pNext; 
	}
}


//�Լ�: addHead() 
//�Է�: ���Ḯ��Ʈ ����ü ������(LinkedList*) , �� ��� ������
//���: ���� 
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰� 


void addHead (LinkedList*pList, Node* pNewNode) { //(Node* pHead, Node* pNewNode) {
	
	
	
	
	pNewNode -> pNext = pList->pHead; //#1
	pList->pHead = pNewNode; // #2 



}

//�Լ�: addTail() 
//�Է�: ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������ 
//���: ���� 
//�μ�ȿ��: �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰��� 

void addTail(Node*pHead, Node*pNode) { 

	if(pHead == NULL) {
		printf("error can't add a tail to empty linked list \n");
		return; 
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}

//�Լ�: creatNode() ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ�Ѵ�. 
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�Ѵ�.  �� �� score=�Է�, pNext = NULL���Ѵ�. 
//�μ�ȿ��: ���� 
Node* createNode(int input) {
 Node*ptr;
 ptr= (Node*) malloc(sizeof(Node));
 ptr->score = input;
 ptr->pNext = NULL;
 return ptr;
}
//head�� �ִ� �� ����°� , tail�� �ִ� �� ����� �� , head,tail�� �ְ� ���ִ� �� ���� 
//�Լ�: printLL() ȭ�鿡 ���Ḯ��Ʈ�� score ���� ���  
//�Է�: ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//���: ���� 
//�μ�ȿ��: ���� 

void printLL (LinkedList* pList) {
	 Node*ptr = pList->pHead;
	while(ptr !=NULL) {
		printf("score = %d\n" , ptr->score);
		ptr=ptr->pNext;
	}
}


int main (void)  { 
/*
	Node a,b;
	a.score=11; b.score=20;
	a.pNext=&b; b.pNext=NULL; 

	printf("average=%f\n",averageLL(&a)); */
    LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList,createNode(10));
	addHead(pList,createNode(20));
	addHead(pList,createNode(30));
	addHead(pList,createNode(40));
	//Node*pHead=NULL,*ptr;


  pHead=createNode(10);
  ptr = createNode(20);
  addTail(pHead,ptr);
  printLL(pHead);



	return 0; 
}








/*int main() { 

	double test;
	test = 10/4; // 1,10/4->2�� ��ȯ  2.������ 2�� double�� 2.0���� ��ȯ
	printf("test = &f\n",test);
	test = 10.0/4; // 1. (10.0/4)->2.5 �� ��ȯ
	printf("test = &f\n",test);
	test=((double)10)/4; //1.������(int)10�� �Ǽ���(double) 10.0���� ��ȯ (10.0/4)->2.5�� ��ȯ
	printf("test = %f\n", test);



}*/

