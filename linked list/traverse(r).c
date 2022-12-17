#include<stdio.h>
#include"LinkedList.h"
void traverse(struct Node *START){
    if(START!=NULL){
        printf("%d ",START->info);
        traverse(START->Next);
    }
}
void traverseInReverse(struct Node *START){
    struct Node *p;
    p=START;
    if(p!=NULL){
        traverse(p->Next);
        printf("%d ",p->info);
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
    traverse(START);
    printf("\n");
    traverseInReverse(START);
}
