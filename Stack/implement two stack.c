#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct twoStack{
    int *arr;
    int size;
    int *TOP;
};
void intailise(struct twoStack *ms,int n){
    ms->arr=calloc(n,sizeof(int));
    ms->size=n/2;
    ms->TOP=calloc(ms->size,sizeof(int));
    int j=-1;
    for(int i=0;i<ms->size;i++){
        ms->TOP[i]=j;
        j=j+(ms->size);
    }
}
int isEmpty(struct twoStack *ms,int n){
    int s=ms->size;
    int a=-1+(n-1)*s;
    if(ms->TOP[n-1]==a) return TRUE;
    else return FALSE;
}
void push(struct twoStack *ms,int n,int val){
    int s=ms->size;
    int a=((n)*s)-1;
    if(ms->TOP[n-1]==a){
        printf("Stack:%d Overflow",n);
        exit(1);
    }
    ms->TOP[n-1]++;
    ms->arr[ms->TOP[n-1]]=val;
}
int pop(struct twoStack *ms,int n){
    if(isEmpty(ms,n)){
        printf("Stack:%d Underflow",n);
        exit(1);
    }
    int x=ms->arr[ms->TOP[n-1]];
    ms->TOP[n-1]--;
    return x;
}
int stackTop(struct twoStack *ms,int n){
    int a=ms->TOP[n-1];
    return ms->arr[a];
}
int main(){
    struct twoStack ms;
    intailise(&ms,16);
    push(&ms,1,10);
    push(&ms,1,20);
    push(&ms,1,20);
    push(&ms,2,40);
    push(&ms,2,50);
    push(&ms,2,60);
    pop(&ms,1);
    pop(&ms,2);
    printf("%d\n",stackTop(&ms,1));
    printf("%d\n",stackTop(&ms,2));
}
