#include <stdio.h>
#include<string.h> 
int top,stack[100]; 
void push(char x){
 if(top==100){ 
printf("stack overflow"); 
}  
else { 
stack[++top]=x; 
}
} 
void pop(){          
printf("%c",stack[top--]); 
} 
int main(){
 char str[100];
 printf("enter string: ");
 scanf("%s",&str);
 int len = strlen(str), i;
 for(i=0; i<len; i++){ 
push(str[i]); 
} 
printf("reverse string : \n");
 for(i=0; i<len; i++){
 pop(); 
} 
return 0; 
} 
