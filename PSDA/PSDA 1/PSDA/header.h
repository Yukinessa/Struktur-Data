#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define infotype int
#define address int
#define MAX 10

typedef struct{
	infotype T[MAX];
	address TOP;
}Stack;

#define infoTop(S) (S).T[(S).TOP]
#define TOP(S) (S).TOP

void createStack(Stack *S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void Push(Stack *S, int value);
void Pop(Stack *S);
void cetakStack(Stack S);

#endif
