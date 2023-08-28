#include<stdio.h> 
struct date {
 int dd, mm, yy;
 };
struct date  read(){
 struct date d;
 printf("enter  date(dd/mm/yy): \n");
 scanf("%d%d%d",&d.dd,&d.mm,&d.yy);
 return d;
 }
void disp(struct date d1,struct date d2){
 printf("first date %d/%d/%d",d1.dd,d1.mm,d1.yy);
 printf("\nsecond date %d/%d/%d",d2.dd,d2.mm,d2.yy);
   }
 int date_cmp(struct date d1, struct date d2) {
   if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy ==d2.yy)
 return 0;
 else if (d1.yy > d2.yy || d1.yy == d2.yy && d1.mm > d2.mm || d1.yy == d2.yy && d1.mm == d2.mm && d1.dd > d2.dd)
 return 1;
 else
 return -1;
   } 
 
int main() {
 struct date d1 ;
 struct date d2;
 d1=read();
 d2=read();
 disp(d1,d2);
 int cmp=date_cmp(d1,d2);
 if(cmp == 0)
 printf("\n both the date is equal");
 else if (cmp > 0)
 printf("\nfirst date is greater  than second date ");
 else
 printf(" \nfirst date is smaller  than second date");
 return 0;
 } 