#include<stdio.h>
#define MAX 100
#include<string.h>
int function(char * str)
{
    int len, i;
    len = strlen(str);
    // remove newline
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}



