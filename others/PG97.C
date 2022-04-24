main()
{
	int i,j;
	clrscr();
	for(i=1,j=1;i<=100,j<=5;i++,j++)
	{
		gotoxy(1,1);
		printf("%d %d\n",i,j);
	}
	getch();
}