#include <stdio.h>
#include <conio.h>
#define SQR(a) (a*a)
void main()
{
  clrscr();
   printf("%d\n",SQR(5));
   /*   5*5 = 5   */
   printf("%d\n",SQR(2+3));
   /*   2+3*2+3 = 11   */
  getch();
}