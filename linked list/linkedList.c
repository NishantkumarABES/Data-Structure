#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"
int main(){
    struct Node *START,*p;
    START = NULL;
    InsEnd(&START,1);
    InsEnd(&START,11);
    InsEnd(&START,11);
    InsEnd(&START,11);
    InsEnd(&START,1);
    p=START;
    for(int i=0;i<3;i++){
        p=p->Next;
    }
    Traverse(&START);
    printf("\n");
    int x=DelAft(&p);
    Traverse(&START);
}
