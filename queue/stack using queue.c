#include<stdio.h>
#include"header files/Queue.h"
struct Queue q1,q2;
void push(int x){
    enqueue(&q2,x);
    while(!isEmpty(&q1)){
        enqueue(&q2,dequeue(&q1));
    }
    while(!isEmpty(&q2)){
        enqueue(&q1,dequeue(&q2));
    }
}
int pop(){
    if(isEmpty(&q1)){
        printf("Invalid");
        exit(1);
    }
    return dequeue(&q1);
}
int main(){
    initialise(&q1);
    initialise(&q2);
    push(10);
    push(20);
    push(30);
    printf("%d\n",pop());
    printf("%d\n",pop());
    return 0;
}
