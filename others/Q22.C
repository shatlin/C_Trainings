main()
{
	struct a
	{
		long int i;
		char ch[4];
	};
	struct a s;
	s.i=512;
	printf("\n%d %d %d %d",s.i,s.ch[0],s.ch[1],s.ch[3]);  //garbage val for ch
	getch();
}