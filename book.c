#include<stdio.h> 
#include<malloc.h> 
struct book{
 char author_name[20];
 char book_name[20];
 };
void disp(struct book *b,int);
 void read(struct book *b)
 {
 int i,n;
 printf("enter number of books \n");
 scanf("%d",&n);
 for(i=0;i<n;i++) {
 printf("enter author name and book name: \n");
 scanf("%s%s",(b+i)->author_name,(b+i)->book_name);
 }
 disp(b,n);
 }
 void disp(struct book *b, int n) { 
int i;
 for(i=0;i<n;i++) {
 printf("\nauthor name : %s, book name: %s",(b+i)->author_name,(b+i)->book_name);
 }
 }
 int main() {
 struct book *b;
 b=(struct book *)calloc(sizeof(struct book),5);
 read(b);
 return 0;
 free(b);
 } 
 
 