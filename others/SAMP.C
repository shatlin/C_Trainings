main()
{
	int a=7,b=6,c;
	clrscr();
	c=add(a,b);
	printf("the sum is %d",c);
	getch();
}

add(int x,int y)
{
	int z,s=2;
	z=x+y;
	return (z,s);    //<<===== the last value gets returned
}