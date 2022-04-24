main()
{
	int b=6;
	float a=7.4,c;
	clrscr();
	add(a,b);
	getch();
}

add(int x,int y)
{
	float z;
	printf("\nvalue of x and y is %d %d",x,y);
	z=x+y;
	printf("\nvalue of z is %d",z);
}