#include<stdio.h>
#define MAX 30

float function(int arr[],int lim)
{
   float avrg=0,sum=0;
   int i;
   for(i=0;i<lim;i++){
       sum += arr[i];
   }
   avrg=sum/lim;
   return avrg;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    float out=function(A,n);    
    
    printf("%f",out);
    return 0;
}


