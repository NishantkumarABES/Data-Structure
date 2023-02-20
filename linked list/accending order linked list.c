#include<stdio.h>
#include"header files/LinkedList.h"
void OrderedInsertion(struct Node **START,int x){
    struct Node *p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL && x>p->info){
        q=p;
        p=p->Next;
    }
    if(q==NULL){
        InsBeg(START,x);
    }
    else InsAft(&q,x);
}
int main(){
    struct Node *START;
    START=NULL;
    OrderedInsertion(&START,35);
    OrderedInsertion(&START,40);
    OrderedInsertion(&START,10);
    OrderedInsertion(&START,25);
    OrderedInsertion(&START,30);
    OrderedInsertion(&START,55);
    Traverse(&START);
}
