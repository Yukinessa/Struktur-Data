#include "header.h"

boolean isEmpty(Queue Q){
    if(Q.Head==0 && Q.Tail==0){
        return 1;
    }
    else{
        return 0;
    }
}
boolean isFull(Queue Q){
    if(Q.Head==9 && Q.Tail==9){
        return 1;
    }
    else{
        return 0;
    }
}
void CreateEmpty(Queue *Q, int max){
    (*Q).T=malloc((max+1))*sizeof(int);
    if((*Q).T!=NULL){
        (*Q).Head=Nil;
        (*Q).Tail=Nil;
        (*Q).MaxEl=Nil;
    }
    else{
        (*Q).MaxEl=Nil;
    }
}

void Add(Queue *Q, int X){
    if(isFull(*Q)){
        printf("Sudah penuh \n");
    }
    else if(isEmpty(*Q)){
        (*Q).Head++;
        (*Q).Tail++;
        (*Q).T[(*Q).Head]=X;
    }
    else{
        (*Q).Tail++;
        (*Q).T[(*Q).Tail]=X;
    }
}
void Del(Queue *Q){
    int i;
    if(isEmpty(*Q)){
        printf("Kosong \n");
    }
    else if((*Q).Head == 1 && (*Q).Tail == 1){
        (*Q).Head--;
    }
    else{
        for(i=(*Q).Head; i<(*Q).Tail;i++){
            (*Q).T[i] = (*Q).T[i+1];
        }
        (*Q).Tail--;
    }
}
void Cetak(Queue Q){
    int i;
    for(i=(Q).Head;i<=(Q).Tail;i++){
        printf("[%d] ", Q.T[i]);
    }
}
