main()
{
	char a[3][3]=
		{ {'a','b','c'},{'p','q','r'},{'x','y',} };
	char **p;
	*p=a[0];
	clrscr();
	printf("%s",*p);
	getch();
}
