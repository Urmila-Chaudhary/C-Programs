#include<stdio.h> 
#include<ctype.h> 
char stack[10], a[5]; 
int top=-1; 
void push (char n) 
{ 
stack [++top] = n; 
} 
char pop() 
{ 
if(top==-1)
 return -1;
 else 
return stack[top--]; 
} 
int priority(char x) 
{ 
if(x=='=')
 return 1;
 if(x=='(')
 return 0;
 if(x=='+'||x=='-')
 return 2;
 if(x=='*'||x=='/')
 return 3;
 return 0; 
} 
 
int main() 
{  	 
printf("Enter Infix expression : "); 
	scanf("%s",&a); 	 
char item,x; 
int i; 
for(i=0;i<5;i++) 
{ 
item=a[i];
 if(isalnum(item))
 printf("%c",item); 
else if(item=='(') 
{ 
push(item); 
} 
else if(item==')') 
{ 
while((x=pop())!='(')
 printf("%c",x); 
} 
else 
{ 
while(priority(stack[top])>=priority(item))
 printf("%c",pop()); 
push(item); 
} 
} 
while(top!=-1) 
{ 
printf("%c",pop()); 
} 
return 0;  
} 
