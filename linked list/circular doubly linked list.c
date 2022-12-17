#include<stdio.h>
#include<stdlib.h>
struct Node{
    int x;
    struct Node *Next;
    struct Node *prev;
};
struct Node* GetNode(){
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    return p;
};
void InsBeg(struct Node **START,int x){
    struct Node *p;
    p=GetNode();
    p->info=x;
    p->Next=(*START);
    (*START)->prev = p;
}
