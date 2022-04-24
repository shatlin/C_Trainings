#include <stdio.h>
#include <conio.h>
void main(void)
{
  int i;
  clrscr();
  for(i=1;i<=5;i++)
  {
    if(i==3)
    continue;
    printf("%d",i);
  }
   printf("\n");
   for(i=1;i<=5;i++)
   {
    if(i==3)
    goto end;
    printf("%d",i);
    end:;
   }
}