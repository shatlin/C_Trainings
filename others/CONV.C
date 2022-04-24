main()
{
	float i;
	float a=5;    //promoted to float
	int s;
	int b=2.666;  //truncated
	clrscr();
	i=a/b;
	s=a/b;  //result is truncated in s
	printf("value of i is %f",i);
	printf("\nvalue of s is %d",s);
	printf("\n%d ",sizeof(b));
	printf("\nvalue of b is %d",b);
	getch();
}
