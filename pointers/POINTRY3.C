#include <stdio.h>
#include <string.h>
int main(void)
{
int a=10,*b,**c,***d,****e,f,g;
clrscr();
e=&a;
f=****e+****e;
printf("a=%d  *e= %d\n",a,*e);
printf("****e=%d  ****e+****e=%d\n",****e,f);
getch();
}

