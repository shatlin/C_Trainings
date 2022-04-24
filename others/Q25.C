int i=0;
main()
{
	clrscr();
	printf("in main i = %d\n",i);
	i++;
	val();
	printf("in main i = %d\n",i);
	getch();
}
val()
{
	int i=100;
	printf("in val i = %d\n",i);
	i++;
}