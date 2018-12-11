#include <stdio.h>
#include <stdlib.h>
​
typedef struct node{
	int score;
	struct node* pNext;
}Node;
​
Node* createNode (int input){
	Node* ptr;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->score=input; ptr->pNext=NULL;
	return ptr;
}
​
void printLL(Node* ptr){
	while(ptr!=NULL){
		printf("score=%d\n",ptr->score);
		ptr=ptr->pNext;
	}
}
​
void addHead (Node** ppHead, Node* pNewNode){
	pNewNode->pNext=*ppHead;
	*ppHead=pNewNode;
}
​
int main(){
	Node* pHead = createNode(10);
	Node* ptr = createNode(20);
​
	//pHead->pNext=ptr;
	addHead(&pHead,ptr);
	printLL(pHead);
	return 0;
}
​