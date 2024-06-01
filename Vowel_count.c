#include<stdio.h>
#define MAX 100

int function(char * str)
{
   int count=0,i;
   for(i=0;str[i]!='\0';i++){
       if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
          count++;
    }
    return count;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}


