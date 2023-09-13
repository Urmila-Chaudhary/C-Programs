#include<stdio.h> 
#include<malloc.h> 
int main(){
 int *p,i;
 p=(int *)malloc(sizeof(int));
 printf("enter a value: ");
 scanf("%d",p);
 printf("%d",*p);
 int *a;
 a=(int*)calloc(sizeof(int),4);
 for(i=0;i<4;i++){
 printf("\nenter value for a[%d]",i);
 scanf("%d",a+i);
 }
 for(i=0;i<4;i++){
 printf("\n%d",*a+i);
  }
 free(a);
free(p);
 return 0;
 } 
 
 