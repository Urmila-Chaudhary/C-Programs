#include<stdio.h> 
int arr[4],pos=-1;
 void insert(int a) 
{ 
if(pos==4) 
{
 printf("array is full\n");
 } 
else 
{ 
arr[++pos]=a; 
}
 }
 void search(int b)
 {
 int i,f,e=0;
 for(i=0;i<=4;i++)
 { 
if(arr[i]==b)
 {
 e=1;
 f=i+1;
 }
    }
 if(e==1) 
printf("%d element is there at %d position\n",b,f);
 else
 printf("element not there\n");
 }
 void del()
 {
 if(pos==-1) 
{
 printf("array is empty\n"); 
} 
else 
{ 
printf("the deleted element is %d\n",arr[pos--]);
 }
 }
 void selem()                                             
{ 
int i,n,j;
 for(i=0;i<=4;i++) 
{
 for(j=0;j<=4;j++)
 if(arr[i]<arr[j])
 { 
n=arr[j];
 arr[j]=arr[i];
 arr[i]=n; 
}
 } 
printf("sorted array =");
 for(i=0;i<=pos;i++)
 {
 printf("%d\t",arr[i]);
 }
 printf("\n"); 
}
 int menu()
 {
 int n1;
 printf("insert-1, search-2, delete-3, sort-4\nenter your choice: "); 
scanf("%d",&n1); return n1;
 }
 void process()
 {
 int ch;
 for(ch=menu();ch!=5;ch=menu())
 {
 switch(ch)
 {
 case 1:  printf("enter the element: ");
 scanf("%d",&ch); insert(ch);
 break;
 case 2: printf("enter element to search: ");
 scanf("%d",&ch); search(ch);
 break;
 case 3:  del(); 
break;
 case 4: selem();
 break; 
default: printf("wrong choice\n");
 break;  
} 
} 
}
 int main() 
{
 process();
 return 0;
 } 