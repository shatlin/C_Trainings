 void swap(int *,int *);
main()
{
	int a=100,b=200;
	swap(&a,&b);
	clrscr();
	printf("%d %d",a,b);
	getch();
}

void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
