main()
{
	int i=100,j=200;
	int const *p=&i;
	clrscr();
	p=&j;    //only *p=243 cannnot be assigned
	printf("\n%d",*p);
	getch();
}