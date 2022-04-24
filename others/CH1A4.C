#include<stdio.h>
#include<conio.h>
main()
{
	int c=10,d=20;
	clrscr();
	printf("\nAddress of c= %u Address of d=%u",&c,&d);
	printf("\nBefore swap(),c=%d d=%d",c,d);
	swap(&c,&d);
	printf("\nAfter swap(),c=%d d=%d",c,d);
	getch();
}

swap(int *cc,int *dd)
{
	printf("\nWe are in swap()...");
	printf("\nAddress of c= %u Address of d=%u",cc,dd);
//	printf("\nBefore swap(),cc=%d dd=%d",*cc,*dd);
	change(&cc,&dd);
//	printf("\nBack to swap()...");
//	printf("\nAfter change(),cc=%d dd=%d",*cc,*dd);
}

change(int **x,int **y)
{
	int t;
	printf("\nWe are in change()...");
//	printf("\nAddress of c= %u Address of d=%u",cc,dd);
//	printf("\nBefore interchanging ,cc=%d dd=%d",*cc,*dd);
	t=**x;
	**x=**y;
	**y=t;
//	printf("\nAfter interchanging,cc=%d dd=%d",*cc,*dd);
}

