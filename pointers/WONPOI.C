#include <stdio.h>
#include <string.h>
int main(void)
{
int a=10,*b,**c,***d,****e;
clrscr();
e=&a;
printf("%d %u ",a,*e);
getch();
}

