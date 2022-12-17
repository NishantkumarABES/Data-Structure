#include<stdio.h>
#include"Header files/LinkedList.h"
void Sort(struct Node **START){
    struct Node *p,*q;
    p=(*START);
    q=p->Next;
    int f=0;
    while(f!=1){
        f=1;
        while(q!=NULL){
            if(p->info>q->info){
                int t=p->info;
                p->info = q->info;
                q->info = t;
                f=0;
            }
            p=p->Next;
            q=q->Next;
        }
    }
}
int main(){
    struct Node *START;
    START = NULL;
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,50);
    InsEnd(&START,70);
    InsEnd(&START,60);
    Traverse(&START);
    printf("\n");
    Sort(&START);
    Traverse(&START);
}

