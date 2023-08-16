#include<stdio.h> 
int main(){
 int a[2][2], i, j;
 int det;
 printf("Enter the 4 elements of the array\n");
 for(i = 0; i < 2; i++)
 for(j = 0; j < 2; j++)
 scanf("%d", &a[i][j]);
 printf("\nThe entered matrix is: \n\n");
 for(i = 0; i < 2; i++) {
 for(j = 0; j < 2; j++){
 printf("%d\t", a[i][j]);  
} 
printf("\n");
   }
 det = (a[0][0]*a[1][1]) - (a[1][0]*a[0][1]);
 printf("\n\nDterminant of 2x2 matrix is : %d - %d =  %d", a[0][0]*a[1][1], a[1][0]*a[0][1], det);
 return 0;
 }