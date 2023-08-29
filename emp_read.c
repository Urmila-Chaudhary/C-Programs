#include<stdio.h> 
#include<string.h>
 struct emp{
 int eno;
 char ename[20];
 int esal;
 int dno;
 };  
void search(struct emp e[],int n){
 int i ,num,f;
 printf("\nenter employee number to search: \n");
 scanf("%d",&num);
 for(i=0;i<n;i++){
 if(e[i].eno==num){
 f=1;
 break;  
 }
 else 
f=0;
 }
 if(f==1)
 printf("\nemployee found");
 else
 printf("\nemployee not found");
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
 search(e,n);
 return 0; 
 } 