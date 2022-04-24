main()
{
	char *a="0101";
	char *b="01";
	clrscr();
	printf("%u %u\n",a,b);
	printf("%d",b);
	a=(char *)((int *)a+1);
	printf("\n%d",a);
	getch();
}