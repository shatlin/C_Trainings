#define SQR(x) ((++x)/(++x))

main()
{
	float i=2;
//	float j;
	clrscr();
//	j=(++i)/(++i);
	printf("%f",i);
	printf("\n%f",SQR(i));
	getch();
}