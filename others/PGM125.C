#include <stdio.h>
#include <conio.h>
#define goto_xy(i,j) printf("\x1B["#i";"#j"f")

/*    ERROR  ansi.sys not loaded   */

main()
{
  int i,j;
   clrscr();
   goto_xy(20,10);
   printf("HELLO");
   getch();
}
