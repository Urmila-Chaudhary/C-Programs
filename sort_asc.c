#include<stdio.h>
 void read(int a[],int n){
 int i;
 for(i=0;i<n;i++){
 printf("enter element %d: ",i+1);
 scanf("%d",&a[i]);
 }
 }
void disp(int a[],int n){
 int i;
 printf("element of array are:\n");
 for(i=0;i<n;i++){
 printf(" %d\t",a[i]);
 }
 printf("\n");
 }
 void sort(int a[],int n){
 int p,i,j;
 printf("sorted array:");
 for( i = 0; i <n;i++) {
  for ( j = i + 1; j < n; ++j) {
  if(a[i]>a[j]){
  p =  a[i];
  a[i] = a[j];
  a[j] = p;
 }
   }
 printf("\n%d\t",a[i]);
   }
 printf("\n");
 }
 int menu(){
 int ch;
 printf("read-1,display-2,sort-3\nenter your choice: ");
 scanf("%d",&ch);
 return ch;
 }
 int main(){
 int a[10],n,ch,b;
 printf("enter number of elements : ");
 scanf("%d",&n);
 for(ch=menu();
ch!=4;
ch=menu())
{
 switch(ch) 
{
 case 1:  read(a,n);
 break;
 case 2: disp(a,n);
 break;
 case 3:  sort(a,n);
 break;
 default:  printf(" wrong choice\n");
 break; 
 }
 }
 return 0;
 } 