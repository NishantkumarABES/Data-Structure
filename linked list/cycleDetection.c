#include<stdio.h>
#include"CircularLinkedList.h"
#define TRUE 1
#define FALSE 0
int Cycledetection(struct Node **START){
    struct Node *T,*R;
    T= (*START);
    R= (*START);
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R){
            return TRUE;
        }
    }
    return FALSE;
}
int main(){
    struct Node *CSTART;
    CSTART=NULL;
    InsEnd(&CSTART,5);
    InsEnd(&CSTART,10);
    InsEnd(&CSTART,15);
    InsEnd(&CSTART,20);
    InsEnd(&CSTART,25);
    int x=Cycledetection(&CSTART);
    Traverse(&CSTART);
}

