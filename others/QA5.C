main()
{
	char **p;
	int **q;
	long **r;
	p=q=r=0;
	p++;
	q++;
	r++;
	clrscr();
	printf("%p..%p..%p",p,q,r);
	getch();
}