static int i=100;
main()
{
	static int i=200;
//   static int i=10;
	clrscr();
	abc();
	printf("%d",i);
	getch();
}
abc()
{
	printf("%d...",i);
}