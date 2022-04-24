#include <stdio.h>
#include <conio.h>
#define STRANGE c==8 ?printf("BYE"):printf("\n")
main()
{
  int a=5,b=6,c=7;
   clrscr();
   if(a==b)
     STRANGE;
   else
     printf("HI");
 getch();
}
