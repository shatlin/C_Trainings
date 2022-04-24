#include<stdio.h>
#include<conio.h>
int *add();

void main()
{
	int a=10,b=20,*c;
	clrscr();
	c=add(&a,&b);
	printf("\nthe sum is %d",*c);
	getch();
}

int *add(int *x,int *y)
{
	int s;
	s=*x+*y;
	return &s;
}