#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#include"header files/myStackPointer.h"
int prcd(char a,char b){
   if(a=='('){
        return FALSE;
   }
   else if(a=='^' || a=='*' || a=='/' || a=='%'){
        if(b=='^' || b=='('){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if(b=='+' || b=='-' || b==')'){
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
    struct stack opstack;
    initialise(&opstack);
    while(infix[i]!='\0'){
        symbol=infix[i];
        i++;
        if((symbol>='a' && symbol<='z')){
            postfix[p]=symbol;
            p++;
        }
        else{
            while(!isempty(&opstack) && prcd(stacktop(&opstack),symbol)){
                  x=pop(&opstack);
                  postfix[p]=x;
                  p++;
            }

            if(symbol==')'){
                pop(&opstack);
            }
            else push(&opstack,symbol);
        }
    }
    while(!isempty(&opstack)){
        x=pop(&opstack);
        postfix[p]=x;
        p++;
    }
    postfix[p]='\0';
    for(int i=0;postfix[i]!='\0';i++){
        printf("%c",postfix[i]);
    }
}
int main(){
    char infix[20];
    printf("Enter the expression: ");
    gets(infix);
    infixtopostfix(infix);
}
