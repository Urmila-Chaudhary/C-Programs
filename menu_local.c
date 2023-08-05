#include<stdio.h>
 int insert(int arr[],int pos,int a){
 if(pos+1==3) {
 printf("array is full\n");
 }
 else  arr[++pos]=a;
 return pos;
 }
 void search(int arr[],int pos) { 
int x,f,i; printf("Enter element to search: "); 
scanf("%d", &x); 
for( i=0;i<pos+1;i++) {
 if(arr[i]==x) { 
f=1;
 break;
 } 
else {
 f=0;
 }
 }
 if(f==1)  {
 printf("element %d is present in the array\n",x);
 }
 else
 printf("element not found\n"); 
} 
int del(int arr[],int pos){ 
 if (pos == -1)  {
 printf("array is empty\n");
 }
 else
 printf("the deleted element is %d\n",arr[pos--]);
 return pos;
 } 
void elem(int arr[],int pos){
 int n,i,j;
 for( i = 0; i <pos+1;i++)
  {
 for ( j = i + 1; j < pos+1; ++j)
 {
 if(arr[i]>arr[j]) {
 n =  arr[i];
  arr[i] = arr[j];
  arr[j] = n;
 }
   }
 printf("sorted array =");
 for(i=0;i<=pos;i++) {
 printf("%d\t",arr[i]);
 }
 printf("\n"); 
}
 }
 int menu(){
 int ch;
 printf("insert-1,search-2,delete-3,sort-4\nenter your choice: ");
 scanf("%d",&ch);
 return ch;
 }
 int main()
{ int arr[3],pos=-1,ch,b;
 for(ch=menu();ch!=5;ch=menu()) {
 switch(ch)
 {
 case 1:  printf("enter the element: ");
   scanf("%d",&b);
   pos=insert(arr,pos,b);
    break; 
case 2: search(arr,pos);
 break; 
case 3: pos=del(arr,pos);
 break; 
case 4: elem(arr,pos);
 break; 
default: printf("wrong choice");   
break; 
 } 
} 
return 0;
 } 