main()
{
	union demo
	{
		int i;
		char ch[2];
	};
	union demo a;
	clrscr();
	a.i=512;
	printf("a.i = %d\n",a.i);
	printf("a.ch[0]= %d\n",a.ch[0]);
	printf("a.ch[1]= %d",a.ch[1]);
	getch();
}