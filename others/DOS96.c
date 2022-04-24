main()
{
	char a[5];                       //a[4] contains the value
	abc(a);
	printf("\n%d %d %d",a[1],a[2],a[4]);
	getch();
}
abc(int a[])
{
	a++;
	a[1]=100;
}