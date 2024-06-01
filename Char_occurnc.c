#include<stdio.h>
#define MAX 100

int function(char * str, char character)
{
   int count=0,i;
   for(i=0;str[i]!='\0';i++){
       if(str[i]==character){
           count++;
       }
   }
   return count;
}


void main()
{   
    char ch,text[MAX];
    ch=getchar();
    fgets(text, sizeof(text), stdin);
    
    int out=function(text,ch);
    printf("%d",out);
}

