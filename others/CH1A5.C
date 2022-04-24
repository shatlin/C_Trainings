#include<stdio.h>
#include<conio.h>

main()
{
	int a=5,*aa;
	clrscr();
	aa=&a;
	printf("\nbefore a= %d aa= %u",a,aa);
	a=power(&aa);
	printf("\nafter a= %d aa= %u",a,aa);
	getch();
}

power(int **ptr)
{
	int b;
	b=**ptr***ptr;
	return (b);
}
