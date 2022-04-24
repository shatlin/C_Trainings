main()
{
	clrscr();
	goto xxx;
	{
		static int p=5; //works because get initialised during load time itself

		xxx: printf("%d",p);
	}
	getch();
}