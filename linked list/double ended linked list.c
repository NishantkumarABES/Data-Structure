#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct Node{
    int info;
    struct Node *Prev;
    struct Node *Next;
};
void intailise(struct Node **REAR,struct Node **FRONT){
    (*REAR) = NULL;
    (*FRONT) = NULL;
}
struct Node *GetNode(){
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    return p;
}
int IsEmpty(struct Node **REAR,struct Node **FRONT){
    if(REAR==NULL) return TRUE;
    else return FALSE;
}
void InsertFront(struct Node **REAR,struct Node **FRONT,int x){
    struct Node *p;
    p=GetNode();
    p->info = x;
    p->Prev = NULL;
    p->Next =(*FRONT);
    if((*FRONT)!=NULL) (*FRONT)->Prev = p;
    else (*REAR) = p;
    (*FRONT) = p;
}
void InsertRear(struct Node **REAR,struct Node **FRONT,int x){
    struct Node *p;
    p=GetNode();
    p->info = x;
    p->Next = NULL;
    p->Prev =(*REAR);
    if((*REAR)!=NULL) (*REAR)->Next = p;
    else (*FRONT) = p;
    (*REAR) = p;
}
int DeleteFront(struct Node **REAR,struct Node **FRONT){
    struct Node *p;
    p=(*FRONT);
    (*FRONT)=(*FRONT)->Next;
    int x=p->info;
    free(p);
    if((*FRONT)==NULL) (*REAR)=NULL;
    else (*FRONT)->Prev = NULL;
    return x;
}
int DeleteRear(struct Node **REAR,struct Node **FRONT){
    struct Node *p;
    p=(*REAR);
    (*REAR)=(*REAR)->Prev;
    int x=p->info;
    free(p);
    if((*REAR)==NULL) (*FRONT)=NULL;
    else (*REAR)->Next = NULL;
    return x;
}
void Traverse(struct Node **DSTART){
    struct Node *p;
    p=(*DSTART);
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->Next;
    }
}
int main(){
    struct Node *FRONT,*REAR;
    intailise(&FRONT,&REAR);
    Traverse(&FRONT);
}
