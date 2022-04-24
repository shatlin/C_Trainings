#include <stdio.h>
#include <conio.h>
#define  SQR(x) ((++x)*(++x))
/*  explains side effect of using ++operator in macro eg, here 3*4=12  */
main()
{
  int i=2;
    clrscr();
  printf("%d",SQR(i));
  getch();
}
