#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   struct try
     {
       char aaa[30];
     };
   struct try a1 = {"Nothing is impossible !"};
   struct try a2;
     clrscr();
     a2=a1;
   printf("%s\n",a1.aaa);
   printf("%s",a2.aaa);
  getch();
}