#include<stdio.h>  
#define N 4  
int a[N],r=-1;  
void enqueue(int e) {
  if(r + 1 == N) {
  printf("Queue : Full\n");
  }
  else {
  r = r + 1;
  a[r] = e;
  printf("entered element %d\n",a[r]);
 }
  }
  void dequeue() {
 int i;
 if(r == -1) {
  printf("Queue : Empty\n");
  }
  else {
  printf("removed element %d\n",a[0]);
  for(i=0;i<=r-1;i++) {
  a[i] = a[i+1];
  }
  r = r - 1;
  }
  }
int main() {
  enqueue(10);
  enqueue(20);
  enqueue(40);
 enqueue(70);
 enqueue(90);
 dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  return 0;
  } 