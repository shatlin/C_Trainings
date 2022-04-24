#include <stdio.h>
#include <conio.h>
main()
{
  clrscr();
  goto xxx;
  {
   static int a=5;
   xxx:printf("%d",a);
   }
}



