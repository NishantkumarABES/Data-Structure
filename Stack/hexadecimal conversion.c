#include<stdio.h>
#include<stdlib.h>
#define size 100
#define TURE 1
#define FALSE 0
#include"header files/mystack.h"
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    initialise();
    while(x!=0){
        int rem =x%16;
        push(rem);
        x=x/16;
    }
    while(!isempty()){
        int a= pop();
        if(a>=10){
            printf("%c",65+(a-10));
        }
        else printf("%d",a);
    }
}
