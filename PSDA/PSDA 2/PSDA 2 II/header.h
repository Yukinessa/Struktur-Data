#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define MAX 10
#define Nil 0

typedef struct{
    int *T;
    int Head;
    int Tail;
    int MaxEl;
}Queue;

#define InfoHead(Q) (Q).T[Head(Q)]
#define InfoTail(Q) (Q).T[Tail(Q)]

boolean isEmpty(Queue Q);
boolean isFull(Queue Q);
void CreateEmpty(Queue *Q, int max);
void Add(Queue *Q, int X);
void Del(Queue *Q);
void Cetak(Queue Q);

#endif // HEADER_H_INCLUDED
