#include<stdio.h> 
#include<string.h> 
struct emp{
 int eno;
 char ename[20];
 int esal;
 int dno; 
};  
struct emp sort1(struct emp E[], int n) {
 struct emp temp;
 int i,j;
 printf("\nsort by salary\n");
 for(i=0;i<n-1;i++) {
 for(j=i+1;j<n;j++) {
 if(E[i].esal > E[j].esal) {
 temp = E[i];
 E[i] = E[j];
 E[j] = temp;
 }
 }
 }
 return E[n];
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
 e[n]=sort1(e,n);
 printf("emp no. , emp name, emp salary and dept no.\n");
 for(i=0;i<n;i++){
 printf("%d %s %d %d\n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
 }
 return 0;
 } 