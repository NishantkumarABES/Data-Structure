#include<stdio.h>
#include<stdlib.h>
#define QUEUESIZE 20
#define TRUE 1
#define FALSE 0
struct Queue{
    int item[QUEUESIZE];
    int Front;
    int Rear;
};
void initialise(struct Queue *q){
    q->Front=0;
    q->Rear=-1;
}
int isEmpty(struct Queue *q){
    if(q->Rear-q->Front+1==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
void insertFront(struct Queue *q,int x){
    if(q->Rear==QUEUESIZE-1){
        printf("Queue overflow");
        exit(1);
    }
    q->Rear++;
    q->item[q->Rear]=x;
}
void insertLast(struct Queue *q,int x){
    for(int i=q->Rear;i>=q->Front;q--){
        q->item[i+1]=q->item[i];
    }
    q->Rear++;
    q->item[q->Front]=x;
}
int main(){
    struct Queue q;
    initialise(&q);
    insertFront(&q,1);
    insertFront(&q,2);
    insertFront(&q,3);
    insertFront(&q,4);
    for(int i=0;i<4;i++){
        printf("%d ",q.item[i]);
    }
}

