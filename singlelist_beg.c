#include<stdio.h> 
#include<malloc.h> 
struct node{
 int data;
 struct node *next; 
};
 struct node *head=NULL;
 void insert_at_start(int e){
 struct node *t;
 t=(struct node *)malloc(sizeof(struct node));
 t->data=e;
 t->next=head;
 head = t;
  }
void disp(){
 struct node *t;
 if (head==NULL)
 printf("Linked list is empty!!\n\n");
 else {
 t=head;
 printf("\n");
 while(t!=NULL){
 printf("%d\t",t->data);
 t=t->next;
 }
 printf("\n");
 }
   }
 int menu(){
 int ch;
 printf("Insert at the beginnig- 1\nDisplay - 2\nEXIT - 3\n");
 printf("Enter your choice : ");
 scanf("%d",&ch);
 return ch;
 }
int main(){
 int ch;
 for(ch = menu();ch != 3;ch = menu()){
 switch(ch) { 
  case 1 : printf("Enter the element to insert : ");
 scanf("%d",&ch);
 insert_at_start(ch);
 break;
 case 2 : disp();
 break;
 default : printf("Wrong Choice!!!\n");
 break;
 }
 printf("\n");
 }
 return 0;
 } 
 
 