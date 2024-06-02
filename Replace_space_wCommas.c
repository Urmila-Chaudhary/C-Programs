#include<stdio.h>
#define MAX 100

char * function(char * str)
{
    int i =0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i]=',';
        }
        i++;
    }
    return str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
    
}


