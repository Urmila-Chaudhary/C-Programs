#include<stdio.h> 
#include<malloc.h> 
struct node{
 int data;
 struct node *next;
 };
 struct node *head=NULL;
 void insert(int e) {
 struct node *t;
 if(head == NULL) {
 head = (struct node *)malloc(sizeof(struct node));
 head -> data = e;
 head -> next = NULL;
 }
 else {
  t=head;
 while(t->next!=NULL) {
 t=t->next;
 }
 t->next=(struct node *)malloc(sizeof(struct node));
 t->next->data=e;
 t->next->next=NULL;
 }
  } 
void delete_from_end() {
 struct node *t;
 if (head==NULL)
 printf("Linked list is empty!!\n\n");
 else if(head->next == NULL)
 head=NULL;
 else {
 t=head;
 while(t->next->next!=NULL) {  
t=t->next;
 }
 t->next=NULL;
 }
 } 
void disp() {
 struct node *t;
 if (head==NULL)
 printf("Linked list is empty!!\n\n");
 else {
 t=head;
 printf("\n");
 while(t!=NULL) {
 printf("%d\t",t->data);
 t=t->next;
 }
 printf("\n");
 }
  }  
int menu() {
 int ch;
 printf("Insert – 1, Delete from the end -2, Display – 3, EXIT - 4\n");
 printf("Enter your choice : ");
 scanf("%d",&ch);
 return ch;
 }
int main() {
 int ch;
 for(ch = menu();ch != 4;ch = menu()) {
 switch(ch) {
 case 1 : printf("Enter the element to insert : ");
 scanf("%d",&ch);
 insert(ch);
 break;
 case 2 : delete_from_end();
 break;
case 3 : disp();
 break;
 default : printf("Wrong Choice!!!\n"); 
  break;
 };
 printf("\n");
 }
 return 0;
 } 
 