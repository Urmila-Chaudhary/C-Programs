#include<stdio.h> 
int a=4,d; 
void disp()
 { 
static int b=2,c; 
printf("\nlocal b=%d,local c=%d , global a=%d",b,c,a);
 }
 int main()
 {
 int c=5,a=7;
 int register e;
 printf("local c=%d ,local  a=%d,global d=%d, register e=%d",c,a,d,e);
 disp();
 return 0;
 } 
 
 