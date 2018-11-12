#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

typedef struct{
    int T[10];
    int Head;
    int Tail;
}Queue;

boolean isEmpty(Queue Q);
boolean isFull(Queue Q);
void CreateEmpty(Queue *Q);
void Add(Queue *Q, int X);
void Del(Queue *Q);
void Cetak(Queue Q);

#endif // HEADER_H_INCLUDED
