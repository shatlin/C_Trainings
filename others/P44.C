main()
{
  int a,b,c,d;
	struct
	{
		int a;
		struct
		{
			int b;
			struct
			{
				int c;
			}a;
		}b;
	}c;

	a=c.a=1;
	b=b.b=2;
	c=a.c=3;
	d=c.b.a.c=4;
	printf("%d %d %d %d",a,b,c,d);
}