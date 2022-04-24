main()
{
	int x[5]={0};   //remaining automatically gets initialised
   int *y=&x[-1],i=0;
   *y=1;
   x[-2]=2;
   clrscr();
	for(i=0;i<7;i++)
	{
		printf("%d\n",x[i-2]);
	}
	getch();
}