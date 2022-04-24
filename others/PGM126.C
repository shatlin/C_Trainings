#include <stdio.h>
#include <conio.h>
#define SUM(x,y) ((x)+(y))
main()
{
 int a=3,b=5;
 float c=3.1,d=5.2;
   clrscr();
  printf("%d\n",SUM(a,b));
  printf("%.2f",SUM(c,d));
  getch();
}
