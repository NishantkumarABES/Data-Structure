#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int jumpSearch(int *arr,int n,int key){
    int j=0;
    int step = (int)floor(sqrt(n));
    printf("step: %d\n",step);
    for(int i=0;i<n;i=i+(step-1)){
        if(key<arr[i]){
            j=i;
            break;
        }
        else if(key==arr[i]){
            return i;
        }
    }
    for(int p=j-1;p>j-step;p--){
        if(arr[p]==key){
            return p;
        }
    }
    return -1;
}
int main(){
    int *arr,n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key: ");
    scanf("%d",&k);
    printf("index- %d",jumpSearch(arr,n,k));
}
