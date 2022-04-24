main()
{
	clrscr();
	goto xxx;
	{
		xxx: printf("%d",p);
	}
	static int p=5;          //error
	getch();
}