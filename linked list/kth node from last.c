#include<stdio.h>
#include"header files/LinkedList.h"
int k_NodeFromLast(struct Node **START,int k){
    int n=CountNode(START);
    int m = n-k;
    if(m<0){
        printf("Invalid");
        return -1;
    }
    int i=0;
    while(i<m){
        (*START)=(*START)->Next;
        i++;
    }
    return *START;

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

    struct Node *n=k_NodeFromLast(&START,3);
    printf("kth Node from Last: %d",n->info);
}
