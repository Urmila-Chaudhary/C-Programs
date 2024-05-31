#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int max,i;
   max = arr[0];
   for(i=1;i<lim;i++){
       if(arr[i]>max){
           max=arr[i];
       }
   }
   return max;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int max=function(A,n);    
    
    printf("%d",max);
    return 0;
}


