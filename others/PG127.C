#define SQR(x) ((++x)*(++x))

main()
{
	int i=2;
	clrscr();

	printf("%d",SQR(i));
	getch();
}