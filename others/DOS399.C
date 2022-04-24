main()
{
	auto volatile short p=0;
	p++;
	printf("\n%d",sizeof(p));
	getch();
}