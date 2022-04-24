main()
{
    int x=10,y=x++,z=y--;
    y -= x--;
    z-= --x;
    x -= --x-x--;
    clrscr();
	 printf("%d %d %d",x,y,z);
	 getch();
}