#include <stdio.h>
#include <string.h>
int main(void)
{
int a=10,*b,**c,***d,****e,f,g;
clrscr();
b=&a;
c=&b;
d=&c;
f=**c + **c;
g=***d + ***d;
printf("%d %d %d",a,f,g);
getch();
}

