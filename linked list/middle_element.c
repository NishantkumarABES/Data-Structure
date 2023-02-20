#include<stdio.h>
#include"header files/LinkedList.h"
struct Node* middleElement(struct Node **START){
    struct Node *T,*R;
    T=*START;
    R=(*START)->Next;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
    }
    return T;
}
int main(){
    struct Node *START;
    START = NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    InsEnd(&START,70);
    Traverse(&START);
    struct Node *m=middleElement(&START);
    printf("\nMiddle Node: %d",m->info);
}
