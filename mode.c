#include<stdio.h> 
#include<malloc.h> 
int main(){
 int*p;
 int j,n,i,count,mxcount=0,mode=0;
 printf("enter number of elements: ");
 scanf("%d",&n);
 p=(int*)calloc(sizeof(int),n);
 for(i=0;i<n;i++){
 printf("enter value for p[%d]: ",i);
 scanf("%d",p+i);
 }
 for(i=0;i<n;i++){
 count=0;
 for(j=0;j<n;j++){
 if(p[i]==p[j]){
 count++;
 }
 }
 if(count>mxcount){
 mxcount=count;
 mode=p[i];
 }
 }
 printf("mode= %d",mode);
 return 0;
 } 
 
 