#include <stdio.h>
#include <string.h>
int main(void)
{
int a=10,*b,**c,***d,****e,f;
clrscr();
d=&a;
f=(*d);
printf("%d %d",a,f);
getch();
}

