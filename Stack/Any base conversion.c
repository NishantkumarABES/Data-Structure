#include<stdio.h>
#include<stdlib.h>
#define size 100
#define TURE 1
#define FALSE 0
#include"header files/mystack.h"
int main(){
    int x,n;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the base: ");
    scanf("%d",&n);
    initialise();
    while(x!=0){
        int rem =x%n;
        push(rem);
        x=x/n;
    }
    while(!isempty()){
        int a= pop();
        if(a>=10){
            printf("%c",65+(a-10));
        }
        else printf("%d",a);
    }
}
