main()
{
	int a=7,b=6,c,d=13;
	clrscr();
	c=add(a);
	printf("\nthe sum is %d",c);
	getch();
}

add(int x,int y)
{
	int z,s=2;
	printf("\nvalue of y is %d",y);
	z=x+y;
	return (z);
}