main()
{
	int i=13,j=14,k;
	clrscr();
	k=func(!++i,!j++);
	printf("\ni = %d j = %d k = %d",i,j,k);
	getch();
}

func(int a,int b)
{
	register int c;
	c=a+b;
	_AX=2000;   //doesn't affect the result
	return c;
}