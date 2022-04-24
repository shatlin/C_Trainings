#include <stdio.h>
#include <string.h>

int main(void)
{
float *p1,i=25.50;
char *a;
clrscr();
//p1=&i;
a=&i;
printf("%u\n",a);
printf("%u\n",&i);
printf("%f",*a);
//check result
//char ptr points to a char .else unpredicatable results.
getch();
}

