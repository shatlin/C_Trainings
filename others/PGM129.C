#include <stdio.h>
#include <conio.h>
int sqr(int);
main()
{
   int i=3;
   int (*ptr_fun)();
     clrscr();
   ptr_fun=sqr;
   printf("%d",(*ptr_fun)(i));
   getch();
}
int sqr(int j)
{
  return(j*j);
}