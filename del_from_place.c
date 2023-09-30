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
void delete_element(int e) {
 struct node *t,*t2;
 if (head==NULL)
 printf("Linked list is empty!!\n\n");
 else if(head->data == e)
 head=head->next;
 else {
 t=head; 
while(t->next!=NULL && t->next->data!=e) {
 t=t->next;
 }
 if(t->next==NULL)
 printf("element not found\n");
 else {
 t->next=t->next->next;
 }
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
 printf("Insert – 1, Delete a specific element – 2, Display – 3, EXIT - 4\n");
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
case 2 : printf("Enter the element to delete : "); 
scanf("%d",&ch);
 delete_element(ch);
 break;
 case 3 : disp();
 break;
 default : printf("Wrong Choice!!!\n");
 break;
 }
 printf("\n");
 }
 return 0;
 } 
 
 