#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(){
 char *r, *p;
 char temp[20];
 int n, i;
 r = (char *)malloc(sizeof(char));
 if (r == NULL) {
 printf("Memory allocation failed.");
 return 1;
 }
 printf("Enter string: ");
 scanf("%s", r);
 printf("%s\n", r);
 printf("Enter the same string: ");
 scanf("%s", temp);
 n = strlen(temp);
 p = (char *)realloc(r, sizeof(char) * (n + 1));
 if (p == NULL) {
 printf("Memory reallocation failed.");
 free(r);
 return 1;
 }
 strcpy(p, temp);
 printf("%s\n", p);
 free(p);
 return 0;
 } 
 
 