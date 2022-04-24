main()
{
	char a[5];
	abc(a);
	clrscr();
	printf("\n%d",a[4]);
	getch();
}
abc(int a[])
{
	a++;
	a[1]=612;
}