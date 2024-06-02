#include<stdio.h>
#define MAX 100
#include<string.h>
#include<ctype.h>
char * function(char * str)
{
    static char result[MAX]; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[i] = toupper(str[i]);
        } else {
            result[i] = str[i];
        }
    }
    result[strlen(str)] = '\0'; //null terminate the result string
    return result;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
}
