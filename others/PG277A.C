main()
{
	static int a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	int **ptr=p;
	clrscr();
	printf("%d %d\n",a+1,*a);
	printf("%u %d %d\n",p,*p,**p);
	printf("%u %d %d\n",ptr,*ptr,**ptr);
	getch();
}
