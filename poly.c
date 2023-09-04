#include<stdio.h> 
int main() {
 int a[10],n,i;
 printf("enter the highest term ");
 scanf("%d",&n);
 for(i=n;i>=0;i--) {
 printf("enter coefficient of x^%d of first polynomial ",i);
 scanf("%d",&a[i]);
 }
 printf("polynomial=");
 for(i=n;i>=0;i--){
 if(i==0)
 printf("%d",a[i],i);
 else
 printf("%dx^%d+",a[i],i);
    }
 return 0;
 } 