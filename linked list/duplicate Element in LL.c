#include<stdio.h>
#include"Header files/LinkedList.h"
void duplicateElement(struct Node **START){
    struct Node *p,*q,*r;
    p=(*START);
    r=p;
    q=p->Next;
    while(p!=NULL){
        while(q!=NULL){
            if(q->info==p->info){
                q=q->Next;
                DelAft(&r);
            }
            else{
                r=r->Next;
                q=q->Next;
            }
        }
        p=p->Next;
        r=p;
        if(p!=NULL) q=p->Next;
    }
}
int main(){
    struct Node *START,*p;
    START = NULL;
    InsEnd(&START,1);
    InsEnd(&START,1);
    InsEnd(&START,1);
    InsEnd(&START,1);
    InsEnd(&START,1);
    InsEnd(&START,1);
    InsEnd(&START,4);
    InsEnd(&START,3);
    InsEnd(&START,6);
    InsEnd(&START,7);
    Traverse(&START);
    duplicateElement(&START);
    printf("\n");
    Traverse(&START);
}
