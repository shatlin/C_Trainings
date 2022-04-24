#include <stdio.h>
#include <conio.h>
#define short_cut(i) printf("zzz"#i" = %f\n",zzz##i)
/*     # for substitution  eg."#i" and ## for concatenation eg. zzz##i  */
void main()
{
   float zzz1=10;
   float zzz2=20;
   float zzz3=30;
   float zzz4=40;
   float zzz5=50;
    clrscr();
   short_cut(1);
   short_cut(2);
   short_cut(3);
   short_cut(4);
   short_cut(5);
   getch();
}