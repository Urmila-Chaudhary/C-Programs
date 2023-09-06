#include<stdio.h> 
int main(){
 int a[10],b[10],c[10],n,i;
 printf("enter the highest term ");
 scanf("%d",&n);
 for(i=n;i>=0;i--){
 printf("enter coefficient of x^%d of first polynomial ",i);
 scanf("%d",&a[i]);
 }
 for(i=n;i>=0;i--){
 printf("enter coefficient of x^%d of second polynomial ",i);
 scanf("%d",&b[i]);
 }
 printf("result= ");
 for(i=n;i>=0;i--){
 c[i]=a[i]+b[i];
 if(i==0)
 printf("%d",c[i],i);
 else
 printf("%dx^%d+",c[i],i);
 }
 return 0; 
 } 