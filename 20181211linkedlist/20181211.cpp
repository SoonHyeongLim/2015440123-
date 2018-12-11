#include<stdio.h>
#include<stdlib.h>


//입력 : 연결리스트
//출력 : 노드 성적의 평균(double)
// 없음

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


//함수: addHead() 
//입력: 연결리스트 구조체 포인터(LinkedList*) , 새 노드 포인터
//출력: 없음 
//부수효과: 연결리스트 헤드에 새 노드를 추가 


void addHead (LinkedList*pList, Node* pNewNode) { //(Node* pHead, Node* pNewNode) {
	
	
	
	
	pNewNode -> pNext = pList->pHead; //#1
	pList->pHead = pNewNode; // #2 



}

//함수: addTail() 
//입력: 연결리스트, 추가하려는 노드 포인터 
//출력: 없음 
//부수효과: 추가하려는 노드가 연결리스트의 tail로 추가됨 

void addTail(Node*pHead, Node*pNode) { 

	if(pHead == NULL) {
		printf("error can't add a tail to empty linked list \n");
		return; 
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}

//함수: creatNode() 노드하나를 동적할당으로 생성하여 반환한다. 
//입력: 성적
//출력: 노드하나를 동적할당으로 생성하여 포인터를 반환한다.  이 때 score=입력, pNext = NULL로한다. 
//부수효과: 없음 
Node* createNode(int input) {
 Node*ptr;
 ptr= (Node*) malloc(sizeof(Node));
 ptr->score = input;
 ptr->pNext = NULL;
 return ptr;
}
//head에 있는 거 지우는것 , tail에 있는 것 지우는 것 , head,tail에 넣고 없애는 것 연습 
//함수: printLL() 화면에 연결리스트의 score 값을 출력  
//입력: 연결리스트 (연결리스트의 헤드노드 포인터)
//출력: 없음 
//부수효과: 없음 

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
	test = 10/4; // 1,10/4->2를 반환  2.정수형 2를 double형 2.0으로 변환
	printf("test = &f\n",test);
	test = 10.0/4; // 1. (10.0/4)->2.5 를 반환
	printf("test = &f\n",test);
	test=((double)10)/4; //1.정수형(int)10을 실수형(double) 10.0으로 변환 (10.0/4)->2.5를 반환
	printf("test = %f\n", test);



}*/

