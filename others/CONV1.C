main()
{
	float i,s,ss;
	int a=5;
	int b=2;
	clrscr();
	ss=a/b;  // the result 2 is promoted to 2.0 float.
	i=(float)(a/b);
	s=(float)a/b;
	printf("value of ss is %f",ss);
	printf("\nvalue of i is %f",i);
	printf("\nvalue of s is %f",s);
	printf("\n%d ",sizeof(b));
	getch();
}
