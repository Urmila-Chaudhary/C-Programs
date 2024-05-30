#include<stdio.h>
#define MAX 100
#include<math.h>
int function(int num)
{
    int temp,temp1,rem,count=0,sum=0;
    temp=num;temp1=num;
    while(temp>0){
        temp/=10;
        count++;
    }
    while(num>0){
        rem=num%10;
        num/=10;
        sum+=pow(rem,count);
    }
    if(sum==temp1)
        return 1;
    else
        return 0;
}


void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}


