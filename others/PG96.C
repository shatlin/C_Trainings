main()
{
	int i,j;
	clrscr();
	for(i=2,j=1;i<=5,j<=200;i++,j++)
	{
		gotoxy(1,1);
		printf("%d %d\n",i,j);
	}
	getch();
}