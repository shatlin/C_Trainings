main()
{
	enum code
	{
		add,
		delet,
		modify,
		unchanged
	};
	typedef enum code CODE;
	int e;
	CODE c,d;
	clrscr();
	c=add;
	e=unchanged;       //note
	d=modify;
	printf("c=%d d=%d e=%d",c,d,e);
	getch();
}