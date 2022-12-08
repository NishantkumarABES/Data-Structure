#include<stdio.h>
#include"LinkedList.h"
struct Node* Reverse(struct Node **START){
    struct Node *p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL){
        InsBeg(&q,p->info);
        p=p->Next;
    }
    return q;
}
int isPalindrome(struct Node **START){
    struct Node *q,*p;
    p=(*START);
    q = Reverse(START);
    while(p->Next!=NULL){
        if(p->info!=q->info){
            return 0;
        }
        p=p->Next;
        q=q->Next;
    }
    return 1;
}
int main(){
    struct Node *START,*p;
    START = NULL;
    InsEnd(&START,1);
    InsEnd(&START,2);
    InsEnd(&START,3);
    InsEnd(&START,3);
    InsEnd(&START,1);
    int x=isPalindrome(&START);
    if(x==1) printf("YES");
    else printf("NO");
}
