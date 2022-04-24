main()
{
	int a[5];
	abc(a);
	clrscr();
	printf("\n%d",a[2]);
	getch();
}
abc(int a[])
{
	a++;
	a[1]=100;
}