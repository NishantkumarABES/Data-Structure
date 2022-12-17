#include<stdio.h>
long long DAT[100];
long long cat(int n){
    if(DAT[n]==0){
    if(n==0) DAT[0]=1;
    else{
        if(n==1) DAT[1]=1;
        else{
            long long sum=0;

                for(int i=0;i<n;i++){
                    sum=sum+cat(n-(i+1))*cat(i);
                }
                DAT[n]=sum;
            }
        }
    }
    return DAT[n];
}
int main(){
    printf("%lld",cat(100));
}
