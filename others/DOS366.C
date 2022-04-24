#define COMB(x,y) (x##y)
main()
{
	int i;
	clrscr();
	i=COMB(200,5);
	printf("%d",i);
	getch();
}