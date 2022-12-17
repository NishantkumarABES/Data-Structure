#include<stdio.h>
#include"Header files/LinkedList.h"
void DeleteX(struct Node **START,int x){
    struct Node *p,*q,*r;
    p=(*START);
    q=p->Next;
    r=q->Next;
    while(q!=NULL){
        if(q->info==x){
            q=q->Next;
            if(r!=NULL) r=r->Next;
            DelAft(&p);
        }
        else{
            p=p->Next;
            if(r!=NULL) q=q->Next;
            r=r->Next;
        }
    }
}
int main(){
    struct Node *START;
    START = NULL;
    int x;
    InsEnd(&START,20);
    InsEnd(&START,10);
    InsEnd(&START,30);
    InsEnd(&START,10);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,10);
    printf("Enter the Number: ");
    scanf("%d",&x);
    Traverse(&START);
    printf("\n");
    DeleteX(&START,x);
    Traverse(&START);
}
