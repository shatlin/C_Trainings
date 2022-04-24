#define COMB(x,y) (x##y)
main()
{
	int i;
	clrscr();
	i=COMB(10+5,5+10);
	printf("%d",i);
	getch();
}