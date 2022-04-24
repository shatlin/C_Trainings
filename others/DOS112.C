main()
{
	int i,j;
	i=0;
	j=~i;
	clrscr();
	printf("%d...%ld",i,j);
	printf("\n%d...%x",i,j); //65535
	getch();
}