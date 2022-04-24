#include <stdio.h>
#include <string.h>
int main(void)
{
int a=10,*b,**c,***d,****e;
clrscr();
b=&a;
c=&a;
d=&c;
e=&d;
printf("%d %u %u %u %u",a,b,c,d,e);
getch();
}

