#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#include"header files/myStack.h"
int prcd(char a,char b){
   if(a=='^' || a=='*' || a=='/' || a=='%'){
        if(b=='^'){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if(b=='+' || b=='-'){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
}
void infixToprefix(char infix[]){
    int i=0,p=0;
    char prefix[20];
    char x,symbol;
    initialise();
    strrev(infix);
    while(infix[i]!='\0'){
        symbol=infix[i];
        i++;
        if(symbol>='a' && symbol<='z'){
            prefix[p]=symbol;
            p++;
        }
        else{
            while(!isempty() && !prcd(symbol,stacktop())){
                  x=pop();
                  prefix[p]=x;
                  p++;
            }
            push(symbol);
        }
    }
    while(!isempty()){
        x=pop();
        prefix[p]=x;
        p++;
    }
    prefix[p]='\0';
    strrev(prefix);
    printf("%s",prefix);
}
int main(){
    char infix[20];
    printf("Enter the Expression: ");
    gets(infix);
    infixToprefix(infix);
}
