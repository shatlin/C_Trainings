main()
{
   static char c[]={48,48};  /*---OR---> static char c[]={48,48};*/
	 char a=c[1];
	 int i;
	 clrscr();
	 printf("\n%d\n",a);

	 for (i=0;i<2;i++)
	 if(c[i])
		printf("\t%c",c[i]);
	 getch();
}
