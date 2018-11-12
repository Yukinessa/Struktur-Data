#include "header.h"


void createStack(Stack *S, int Size){
    (*S).T=(infotype)malloc(Size*sizeof(int));
    TOP(*S)=0;
    Size(*S)=Size;
}

bool isEmpty(Stack S){
	if(TOP(S)==0){
		return true;
	}
	else{
		return false;
	}
}
bool isFull(Stack S){
	if(TOP(S)>MAX){
		return true;
	}
	else{
		return false;
	}
}

void Push(Stack *S, int value){
	if(isFull(*S)){
		printf("full\n");
	}
	else{
		infoTop(*S)=value;
		TOP(*S)++;
	}
}
void Pop(Stack *S){
	if(isEmpty(*S)){
		TOP(*S)--;
	}
	else{
		printf("is empty\n");
	}
}
void cetakStack(Stack S){
	int i;
	for(i=TOP(S)-1;i>0;i--){
		printf("%d - %d\n",i,(S).T[i]);
	}
}
