main()
{
	int i=50;
	float f;
	f=value(i);
	clrscr();
	printf("f=%f",f);
	getch();
}
value(i)
{
	if(!i)
		return 55.5;
	return 77.77;
}