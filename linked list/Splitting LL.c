#include<stdio.h>
#include"LinkedList.h"
struct Node* MiddleElement(struct Node **START){
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
void Split(struct Node **START){
    struct Node *START2,*p;
    p=(*START);
    START2=NULL;
    p=MiddleElement(START);
    START2 = p->Next;
    p->Next = NULL;
    Traverse(START);
    printf("\n");
    Traverse(&START2);
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
    Split(&START);

}
