main()                                    //_fastcall
{
	struct xxx
	{
		int i;
		char j;
	};
	struct xxx zzz={1,'a'};
	clrscr();
	abc(zzz);
	getch();
}
abc(struct xxx aaa)
{
	printf("%d .. %d",aaa.i,aaa.j);
}