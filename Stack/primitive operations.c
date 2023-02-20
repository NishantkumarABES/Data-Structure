#include<stdio.h>
#include<stdlib.h>
#define TURE 1
#define FALSE 0
#include"header files/mystack.h"
int main(){
    initialise();
    for(int i=0;i<5;i++){
        push(100);
    }
    printf("%d %d",pop(),s.TOP);
}
