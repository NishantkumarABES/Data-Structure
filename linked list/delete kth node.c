#include<stdio.h>
#include"Header files/LinkedList.h"
#include<stdio.h>
#include<stdlib.h>


void Delete_KthNode(struct Node **START,int k){
    struct Node *p,*q;
    int i=1;
    p=(*START);
    while(i<=k){
        i++;
        if(p!=NULL){
            p=p->Next;
        }
    }
    q=(*START);
    if(p!=NULL){
        while(p->Next!=NULL){
            q=q->Next;
            p=p->Next;
        }
        DelAft(&q);
    }
    else DelBeg(START);
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
    Delete_KthNode(&START,3);
    Traverse(&START);
}
