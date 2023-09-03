#include<stdio.h> 
#include<string.h> 
struct emp{ 
int eno; 
char ename[20]; 
int esal; 
int dno; 
};  
 
struct emp delete(struct emp e[],int n,int no) {
 int i;
 for(i=no;i<n;i++) {
 e[i]=e[i+1];
 }
 n--;
 return e[n];
 } 
 
int main(){
 struct emp e[10];
 int n,i,j;
 printf("enter number of employee\n");
 scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("enter emp no. , emp name, emp salary and dept no.\n");
 scanf("%d%s%d%d",&e[i].eno,&e[i].ename,&e[i].esal,&e[i].dno);
 }
 printf("emp no. , emp name, emp salary and dept no.\n");
 for(i=0;i<n;i++){
 printf("%d %s %d %d\n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
 }
 printf("enter the index to be deleted\n");
 scanf("%d",&j);
 e[--n]=delete(e,n,j);        
  printf("\n"); printf("emp no. , emp name, emp salary and dept no.\n");
 for(i=0;i<n;i++){
 printf("%d %s %d %d\n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
 }
 return 0;
 } 