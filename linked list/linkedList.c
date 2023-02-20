#include<stdio.h>
#include<stdlib.h>
#include"Header files/LinkedList.h"
int main(){
    struct Node *START,*p;
    START = NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    Traverse(&START);
}
