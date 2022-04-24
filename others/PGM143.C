#include <stdio.h>
#include <conio.h>
#define SWAP(DATA_TYPE,x,y) {DATA_TYPE temp=x;x=y;y=temp;}
main()
{
  double a=3.1234,b=5.5678;
  clrscr();
   SWAP(double,a,b);
   printf("After swap : a = %f , b = %f",a,b);
   getch();
}