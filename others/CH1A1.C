#include<stdio.h>
#include<conio.h>
main()
{
	int a,*b,**c,***d,****e;
	a=10;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	printf("\na=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
	printf("\n%d %d %d",a,a+*b,**c+***d+****e);
	getch();
}