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
void infixtopostfix(char infix[]){
    int i=0,p=0;
    char postfix[20];
    char x,symbol;
    initialise();
    while(infix[i]!='\0'){
        symbol=infix[i];
        i++;
        if((symbol>='a' && symbol<='z')||(symbol>='A' && symbol<='Z')||(symbol>='0' && symbol<='9')){
            postfix[p]=symbol;
            p++;
        }
        else{
            while(!isempty() && prcd(stacktop(),symbol)){
                  x=pop();
                  postfix[p]=x;
                  p++;
            }
            push(symbol);
        }
    }
    while(!isempty()){
        x=pop();
        postfix[p]=x;
        p++;
    }
    postfix[p]='\0';
    for(int i=0;postfix[i]!='\0';i++){
        if(postfix[i]!='(' && postfix[i]!=')')
            printf("%c",postfix[i]);
    }
}
int main(){
    char infix[20];
    printf("Enter the expression: ");
    gets(infix);
    infixtopostfix(infix);
}
