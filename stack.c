#include<stdio.h> 
int stack[4],top=-1; 
void push(int x){
 if(top+1==4) { 
printf("\nSTACK overflow\n"); 
} 
else { 
stack[++top]=x; 
} 
} 
void pop(){ 
if (top == -1) { 
printf("\nstack underflow\n"); 
} 
else 
printf("\nthe deleted element is %d\n",stack[top--]); 
} 
int menu(){
 int ch; 
printf("push-1,pop-2,exit-3\nenter your choice: ");
 scanf("%d",&ch); 
return ch; 
} 
int main(){ 
int ch,b; 
for(ch=menu();ch!=3;ch=menu()){ 
switch(ch){
 case 1: printf("enter the element: "); 
 scanf("%d",&b);
 push(b);
 break;
 case 2: pop();
 break;
 default: printf("wrong choice\n"); 
break;  
} 
} 
return 0; 
} 
