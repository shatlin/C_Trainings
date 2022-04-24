#define SQR(x) ((++x)*(++x))

main()
{
	int i=2,j;
	clrscr();
	j=(++i)*(++i);
	printf("%d",j);
//	printf("%d",SQR(i));
	getch();
}