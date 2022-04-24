#include <stdio.h>
main()
{
 FILE *fp;
 unsigned char i;
 fp=fopen("1.c","r");
 while(!eof())
 {
  i=fgetc(fp);
  printf("%c",i);
  getch();
  }
 }