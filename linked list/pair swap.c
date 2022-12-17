#include<stdio.h>
#include"Header files/LinkedList.h"
void Swap(struct Node **START){
    struct Node *p,*q;
    p=(*START);
    q=p->Next;
    while(q!=NULL){
        int t=p->info;
        p->info = q->info;
        q->info = t;
        p=p->Next->Next;
        q=q->Next;
        if(q!=NULL){
            q=q->Next;
        }
    }
}
int main(){
    struct Node *START;
    START=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    Traverse(&START);
    printf("\n");
    Swap(&START);
    Traverse(&START);
}

