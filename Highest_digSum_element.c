#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int num,i,rem,max=0,maxIndex;
   for(i=0;i<lim;i++){
       int sum = 0;
       num=arr[i];
       while(num>0){
       rem=num%10;
       num = num/10;
       sum+=rem;
       }
       if(sum>max){
           max = sum;
           maxIndex = i;
       }
   }
   return arr[maxIndex];
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


