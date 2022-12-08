#include<stdio.h>
#include"LinkedList.h"
struct Node* mergePoint(struct Node **START1,struct Node **START2){
    struct Node *p,*q;
    p=(*START1);
    q=(*START2);
    int m = CountNode(START1);
    int n = CountNode(START2);
    if(m>n){
        for(int i=0;i<(m-n);i++){
            p=p->Next;
        }
    }
    else if(n>m){
        for(int i=0;i<(n-m);i++){
            q=q->Next;
        }
    }
    while(p!=q){
        p=p->Next;
        q=q->Next;
    }
    return p;
}
int main(){
    struct Node *START1,*START2,*p,*q,*k;
    START1 = NULL;
    InsEnd(&START1,1);
    InsEnd(&START1,2);
    InsEnd(&START1,3);
    InsEnd(&START1,4);
    InsEnd(&START1,5);
    InsEnd(&START1,6);
    InsEnd(&START1,7);
    InsEnd(&START1,8);
    START2 = NULL;
    InsEnd(&START2,10);
    InsEnd(&START2,11);
    p=START1;
    q=START2;
    while(p->Next!=NULL){
        if(p->info==5){
            break;
        }
        p=p->Next;
    }
    while(q->Next!=NULL){
        q=q->Next;
    }
    q->Next=p;
    Traverse(&START1);
    printf("\n");
    Traverse(&START2);
    printf("\n");
    k=mergePoint(&START1,&START2);
    printf("%d",k->info);

}
