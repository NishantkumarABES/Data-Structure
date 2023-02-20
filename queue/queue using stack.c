#include<stdio.h>
#include<stdlib.h>
#include"header files/myStackPointer.h"
struct stack s1,s2;
void enQueue(int x){
    while(!isempty(&s1)){
        push(&s2,stacktop(&s1));
        pop(&s1);
    }
    push(&s1,x);
    while(!isempty(&s2)){
        push(&s1,stacktop(&s2));
        pop(&s2);
    }
}
int deQueue(){
    if(isempty(&s1)){
        printf("Invalid");
        exit(1);
    }
    int x=stacktop(&s1);
    pop(&s1);
    return x;
}

int main(){
    initialise(&s1);
    initialise(&s2);
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    printf("%d ",deQueue());
    printf("%d ",deQueue());
    printf("%d ",deQueue());
    printf("%d ",deQueue());
}
