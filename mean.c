#include<stdio.h> 
#include<malloc.h> 
int main() {
 int*p;
 int mean=0,sum=0,n,i;
 printf("enter number of elements\n");
 scanf("%d",&n);
 p=(int*)malloc(sizeof(int)*n);
 for(i=0;i<n;i++) {
 printf("enter value for p[%d]: ",i);
 scanf("%d",&p[i]);
 sum+=p[i];
 } 
mean=sum/n;
 printf("\nmean=%d",mean);
 return 0;
 } 