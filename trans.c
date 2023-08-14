#include<stdio.h> 
void trans(int m[3][3], int trans[3][3]) {
 int i,j;
 for ( i = 0; i < 3; i++)
 for ( j = 0; j < 3; j++)
 trans[i][j] = m[j][i];
 }
 void display(int m[3][3]) {
 int i,j;
 for( i=0; i<3; i++) {
 for( j=0; j<3; j++)
 printf("%d\t",m[i][j]); 
printf("\n");
  }
 }
 int main() { 
int n;
 int a[3][3] = {5,6,7,8,9,10,3,1,2 };
 int b[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
 int c[3][3]; 
printf("First Matrix:\n");
 display(a);
 printf("Second Matrix:\n");
 display(b);
 printf("Transpose of the first matrix: \n");
 trans(a, c);
 display(c);
 return 0;
 } 