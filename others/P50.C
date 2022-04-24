main()
{
   int _[2]={65,66};
	*_=*(_+1)-*_+66;
	clrscr();
   printf("%c",*_);
	getch();
}