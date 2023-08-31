#include<stdio.h> 
#include<string.h> 
struct emp{ 
int eno;
 char ename[20];
 int esal;
 int dno;
};   
struct emp sort(struct emp e[],int n){
 struct emp t;
 int i,j;
 printf("\nsort by name: \n");
 for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 if((strcmp(e[i].ename,e[j].ename))<0){
 t=e[i];
 e[i]=e[j];
 e[j]=t;
 }
 }
 }
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
 e[n]=sort(e,n);   
printf("emp no. , emp name, emp salary and dept no.\n");
 for(i=0;i<n;i++){
 printf("%d %s %d %d\n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
 }
 return 0;
 } 