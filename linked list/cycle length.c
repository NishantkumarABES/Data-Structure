#include<stdio.h>
#include"Header files/CircularLinkedList.h"
int countLengthOfCycle(struct Node **START);
    struct Node *T,*R;
    T=*START;
    R=*START;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if(T==R){
            break;
        }
    }
    int c=0;
    do{
        c++;
        T=T->Next;
    }while(T!=R);
    return c;
}
int main(){
    struct Node *CSTART;
    CSTART=NULL;
    InsEnd(&CSTART,5);
    InsEnd(&CSTART,10);
    InsEnd(&CSTART,15);
    InsEnd(&CSTART,20);
    InsEnd(&CSTART,25);
    int x=countLengthOfCycle(&CSTART);
    Traverse(&CSTART);
}
