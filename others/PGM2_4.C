#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#define NULL 0
void main(void)
{
   char *ptr;
   clrscr();
    if((ptr=(char*)malloc(64000))==NULL)
      printf("your choice of memory model is wrong.");
    else
      printf("memory reserved in heap area.");
  getch();
}


