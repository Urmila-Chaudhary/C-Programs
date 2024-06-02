#include<stdio.h>
#define MAX 100
#include<string.h>
int function(char * str)
{
   int i=0,words = 0;
   int len = strlen(str);
    while (i < len) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            words++;
        }
        i++;
    }
    return words;
}

void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);

    int out = function(text);
    printf("%d", out);
}
