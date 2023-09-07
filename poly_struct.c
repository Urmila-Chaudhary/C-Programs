#include <stdio.h> 
struct Term {
 int coeff;
 int exp;
 }; 
int main() {
 struct Term poly[50];
 int n, i; 
printf("Enter the maximum degree of the polynomial: ");
 scanf("%d", &n); 
printf("Enter the coefficients  for each term:\n");
 for (i = 0; i <= n; i++) {
 printf("Coefficient of x^%d: ", i);
 scanf("%d", &poly[i].coeff);
 poly[i].exp = i;
 }  
printf("The polynomial is: ");
 for (i = n; i >= 0; i--) {
 if (poly[i].coeff != 0) {
 if (i != n) {
 printf(" + ");
 }
 if (poly[i].exp == 0) { 
printf("%d", poly[i].coeff);
 }
  else if (poly[i].exp == 1) {
 if (poly[i].coeff == 1) {
 printf("x");
 }
  else if (poly[i].coeff == -1) {
 printf("-x");
 }
 else {
 printf("%dx", poly[i].coeff);
 }
 }
  else {
 if (poly[i].coeff == 1) {
 printf("x^%d", poly[i].exp); 
  } 
else if (poly[i].coeff == -1) {
 printf("-x^%d", poly[i].exp);
 }
  else 
{
 printf("%dx^%d", poly[i].coeff, poly[i].exp); 
}
 }
 }
 }
 printf("\n");  
return 0; 
} 
 
 