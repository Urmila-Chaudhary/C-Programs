#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
    int i,one=0,zero=0;
    for(i=0;i<lim;i++){
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==0){
            zero++;
        }
    }
    if(one>zero)
        return 1;
    if(one<zero)
        return -1;
    if(one==zero)
        return 0;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}


