#include<stdio.h> 
struct poly{ 
int exp;
 int coe;
 };
 int read(struct poly p[],int n){
 int i;
 for(i=0;i<n;i++){
 if(i==0) 
printf("Enter the coefficient and exponent of 1st term : ");
 else if (i==n-1)
 printf("Enter the coefficient and exponent of last term : ");
 else
 printf("Enter the coefficient and exponent of next term : ");
 scanf("%d%d",&p[i].coe,&p[i].exp);
 }
 sort(p,n);
 n = reduce(p,n);
 return n;
 }
 int prod(struct poly p1[], struct poly p2[], struct poly res[],int n1, int n2){    int i,j,k=0; for(i=0;i<n1;i++) { for(j=0;j<n2;j++){ res[k].coe = p1[i].coe * p2[j].coe; res[k].exp = p1[i].exp + p2[j].exp; k++; } } sort(res,k); k = reduce(res,k); return k; } int reduce(struct poly p[],int n){ int i,j,k=0; int coesum; for(i=0;i<n;i=j){ coesum = p[i].coe; for(j=i+1;p[j].exp==p[i].exp;j++){ coesum  = coesum + p[j].coe; } p[k].coe = coesum; p[k].exp = p[i].exp; 
  k++; 
  }
 return k;
 }
 sort(struct poly p[],int n){
 int a,i,j;
 for (i = 0; i < n; ++i){ 
for (j = i + 1; j < n; ++j){
  if (p[i].exp < p[j].exp) {
 a =  p[i].exp;
 p[i].exp = p[j].exp;
 p[j].exp = a;
 a =  p[i].coe;
 p[i].coe = p[j].coe;
 p[j].coe = a;
 }
 }
 }
 }
 void disp(struct poly p[],int n){
    int i;
 printf("%dx^%d",p[0].coe,p[0].exp);
 for(i=1;i<n;i++){
 if(p[i].exp == 0){
 if(p[i].coe < 0)
 printf(" - %d",-p[i].coe);
 else
 printf(" + %d",p[i].coe);
 }
 else{
 if(p[i].coe < 0)
 printf(" - %dx^%d",-p[i].coe,p[i].exp);
 else
 printf(" + %dx^%d",p[i].coe,p[i].exp);
 }
 }
 }
 int main(){
 struct poly p1[10],p2[10],res[30];
 int n1,n2;
 printf("Enter the number of terms of the 1st polynomial : ");
 scanf("%d",&n1);
 printf("Enter the terms of the 1st polynomial\n");
 n1 = read(p1,n1);
 printf("Enter the number of terms of the 2nd polynomial : ");
 scanf("%d",&n2);
 printf("Enter the terms of the 2nd polynomial\n");
 n2 = read(p2,n2);
 printf("\n1st polynomial is \n");
 disp(p1,n1); 
 printf("\n2nd polynomial is \n");
 disp(p2,n2);
 int n3 = prod(p1,p2,res,n1,n2);
 printf("\nProduct polynomial is \n");
 disp(res,n3);
 return 0;
 } 