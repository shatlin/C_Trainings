int i=5;
main()
{
	int i=4;
	clrscr();
	printf("%d",abc(i=i/4));
	getch();
}
abc(int z)     //formal parameter is z and  not i;
{
	return i/2;
}