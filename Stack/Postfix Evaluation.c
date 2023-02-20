#include<stdio.h>
#include<string.h>
#include"header files/myStack.h"
int Evaluate(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '/': return a/b;
    }
}
int PostfixEvalution(char *exp){
    initialise();
    char symb;
    int a,b,val,i=0;
    while(exp[i]!='\0'){
        symb=exp[i];
        if(symb>='0'&&symb<='9'){
            push(symb-48);
        }
        else{
            b= pop();
            a= pop();
            val =Evaluate(a,b,symb);
            push(val);
        }
        i++;
    }
    int x=pop();
    return x;
}
int main(){
    char exp[20];
    printf("Enter the Expression(postFix): ");
    gets(exp);
    int x=PostfixEvalution(exp);
    printf("Result: %d",x);
    return 0;
}
