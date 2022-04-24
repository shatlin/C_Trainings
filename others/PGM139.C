#include <stdio.h>
#include <conio.h>
#define STRANGE if(c==8)printf("BYE")
/*    no output   */
void main()
{
  int a=5,b=6,c=7;
   clrscr();
     if (a==b)
	STRANGE;
     else
	printf("HI");
   getch();
}


