#include <stdio.h>
#include <conio.h>
void main()
{
  clrscr();
  goto start;
  {
   static int a=5;
   start:printf("%d",a);
  }
}
