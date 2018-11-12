/*
    NAMA : Kun Amrin Amanu
    NIM : A11.2017.10333
    PSDA 2 I
*/
#include "header.h"
#include "boolean.h"

int main()
{
    Queue Q;
    CreateEmpty(&Q);
    Add(&Q,10);
    Add(&Q,9);
    Add(&Q,8);
    Add(&Q,7);
    Add(&Q,6);

    Cetak(Q);
    return 0;
}
