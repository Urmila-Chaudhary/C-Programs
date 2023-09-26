#include<stdio.h> 
#include<malloc.h> 
struct node{
 int data;
 struct node *next;
 };
 struct node *head=NULL; 
void insert(int e){
 struct node *t;
 if(head==NULL)
{
 head=(struct node *)malloc(sizeof(struct node));
 head->data=e;
 head->next=NULL;
 }
 else{
 t=head;
 while(t->next!=NULL){
 t=t->next;
 }
 t->next=(struct node *)malloc(sizeof(struct node));
 t->next->data=e;
 t->next->next=NULL;  
   } 
  } 
void insert_after_element(int e) {
 struct node *t, *t2;
 int num;
 if (head == NULL)
 printf("Linked list is empty!!\n");
 else {
 printf("Enter the element after which %d should be inserted: ", e);
 scanf("%d", &num);
 t = head;
 while (t != NULL && t->data != num) {
 t = t->next;
 }
 if (t == NULL)
 printf("%d not found\n", num);
 else { 
t2 = t->next;
 struct node *newNode = (struct node *)malloc(sizeof(struct node));
 newNode->data=e;
 newNode->next = t2;
 t->next = newNode;
 }
 }
 }
void disp() {
 struct node *t;
 if (head==NULL)
 printf("Linked list is empty!!\n");
 else {
 printf("linked list: \n");
 t=head;
 while(t!=NULL) {
 printf("%d\t",t->data);
 t=t->next;
 }
 }
   } 
int menu() {
 int ch;
printf("Insert -1, Insert after a specified element - 2, Display - 3, EXIT - 4\n");
 printf("Enter your choice : ");
 scanf("%d",&ch);
 return ch;
 }
 int main() {
 int ch; 
for(ch = menu();ch != 4;ch = menu()) {
 switch(ch) {
 case 1 : printf("\nenter the element : ");
 scanf("%d",&ch);
 insert(ch);
 break;
 case 2 : printf("\nEnter the element to insert : ");
 scanf("%d",&ch);
 insert_after_element(ch);
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