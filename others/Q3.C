main()
{
	int a=3,b=2,c=1,d;
	clrscr();
	d=a|b&c;
	printf("\nd=%d\n",d);
	d=a|b&~c;
	printf("d=%d\n",d);
	getch();
