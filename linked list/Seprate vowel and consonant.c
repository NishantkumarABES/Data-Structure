#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *Next;
};
struct Node *GetNode(){
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    return p;
};
void Traverse(struct Node **START){
    struct Node *p;
    p=*START;
    while(p!=NULL){
        printf("%c ",p->info);
        p=p->Next;
    }
}
void InsBeg(struct Node **START,char x){
    struct Node *p;
    p=GetNode();
    p->info=x;
    p->Next=(*START);
    (*START)=p;
}
void InsAft(struct Node **q,char x){
    struct Node *p,*r;
    p=GetNode();
    p->info=x;
    r=(*q)->Next;
    p->Next=r;
    (*q)->Next=p;
}
void InsEnd(struct Node **START,char x){
    struct Node *q,*p;
    q=(*START);
    if(q==NULL){
        InsBeg(START,x);
    }
    else{
        while(q->Next!=NULL){
            q=q->Next;
        }
        p=GetNode();
        p->info=x;
        p->Next=NULL;
        q->Next=p;
    }
}
char DelBeg(struct Node **START){
    char x;
    struct Node *p;
    p=*START;
    x=p->info;
    *START=(*START)->Next;
    free(p);
    return x;
}
char DelAft(struct Node **p){
    char x;
    struct Node *q,*r;
    q=(*p)->Next;
    r=q->Next;
    (*p)->Next=r;
    x=q->info;
    free(p);
    return x;
}
int isvowel(char x){
    if((x=='a') || (x=='e') || (x=='i') || (x=='o') || (x=='u')){
        return 1;
    }
    else{
        return 0;
    }
}
void Seprate(struct Node **START){
    struct Node *p,*q,*r;
    p=NULL;
    q=(*START);
    char x;
    while(q!=NULL){
        if(isvowel(q->info) && q==(*START)){
            r=q;
            p=q;
            q=q->Next;
        }
        else if(isvowel(q->info)){
            q=q->Next;
            x=DelAft(&r);
            if(p!=NULL){
               InsAft(&p,x);
               p=p->Next;
            }
            else{
                InsBeg(START,x);
                p=(*START);
            }
        }
        else if(q==(*START)){
            r=q;
            q=q->Next;
        }
        else{
            r=q;
            q=q->Next;
        }

    }
}
int main(){
    struct Node *START;
    START=NULL;
    InsEnd(&START,'p');
    InsEnd(&START,'l');
    InsEnd(&START,'k');
    InsEnd(&START,'e');
    InsEnd(&START,'i');
    InsEnd(&START,'k');
    Traverse(&START);
    printf("\n");
    Seprate(&START);
    Traverse(&START);
}

