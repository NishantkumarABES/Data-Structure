#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct multi_Stack{
    int *arr;
    int size;
    int *TOP;
};
void intailise(struct multi_Stack *ms,int n,int m){
    ms->arr=calloc(n,sizeof(int));
    ms->size=n/m;
    ms->TOP=calloc(ms->size,sizeof(int));
    int j=-1;
    for(int i=0;i<ms->size;i++){
        ms->TOP[i]=j;
        j=j+(ms->size);
    }
}
int isEmpty(struct multi_Stack *ms,int n){
    int s=ms->size;
    int a=-1+(n-1)*s;
    if(ms->TOP[n-1]==a) return TRUE;
    else return FALSE;
}
void push(struct multi_Stack *ms,int n,int val){
    int s=ms->size;
    int a=((n)*s)-1;
    if(ms->TOP[n-1]==a){
        printf("Stack:%d Overflow",n);
        exit(1);
    }
    ms->TOP[n-1]++;
    ms->arr[ms->TOP[n-1]]=val;
}
int pop(struct multi_Stack *ms,int n){
    if(isEmpty(ms,n)){
        printf("Stack:%d Underflow",n);
        exit(1);
    }
    int x=ms->arr[ms->TOP[n-1]];
    ms->TOP[n-1]--;
    return x;
}
int main(){
    struct multi_Stack ms;
    int m;
    intailise(&ms,16,4);
}
