main()
{
	float i=4,j;
	clrscr();
	j=++i/--i;
	printf("%f\n",j);

	j=--i/++i;
	printf("%f\n",j);
	getch();
}