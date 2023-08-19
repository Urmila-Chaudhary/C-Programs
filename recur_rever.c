#include<stdio.h> 
void Arrele(int arr[], int e, int f){
 if(e >= f)
 return;
 printf("%d  ", arr[e]);
 Arrele(arr, e+1, f);
 }
int main(){
 int arr[10],n,i;
 printf(" enter the number of elements to be stored in the array :");
 scanf("%d",&n);
 printf(" enter elements in the array :\n");
 for(i=0;i<n;i++) {
 printf(" element - %d : ",i);
 scanf("%d",&arr[i]);
 }
 printf(" The elements in the array are : ");
 Arrele(arr, 0, n);
 printf("\n\n");
  return 0;
 } 
 
 