#include<stdio.h> 
#include<ctype.h> 
char stack[10], a[10]; 
int top=-1; 
void push (int n) {
 stack [++top] = n;
 }
char pop() {
 if(top==-1)
 return -1;
 else
 return stack[top--];
 }  
int main() {
   printf("Enter postfix expression : ");
 char item;
  int i,x,op1,op2,res;
 for(i=0;i<5;i++) {
 scanf("%c",&a[i]);
 item=a[i];
 if(isdigit(item))
 push(item-'0');
   else
    {
 op2=pop();
 op1=pop();
 switch (item){
 case '+' :res= op1+op2;
 break;
 case '-' : res=op1-op2;
 break;
 case '*' : res=op1*op2;
 break;
 case '/' : res=op1/op2;
 break; 
  }
   push(res);
 }
 }
 x = pop ( );
 printf("evaluated value = %d", x);
 return 0;
 } 
 
 