#include\
<stdio.h>
#include\
<conio.h>
#include<string.h>
#define as clrscr();
#include<math.h>
#define f(x,y) x*2+3*y+16
void main(c,v)
{
int x=10,y=11,z=12;
as
x=++y=z++;  //assignment operator right to left
printf("%d  %d  %d",x,y,z);
getch();
}

