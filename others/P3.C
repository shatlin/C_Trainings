main()
{
   int i,j,k,l;
   int *iptr,*jptr,*kptr,*lptr;
	clrscr();
	  i=j=k=l=5;
	  iptr=&i;
	  jptr=&j;
	  kptr=&k;
	  lptr=&l;
	  printf("%d %d\n",i,*iptr++);
	  printf("%d %d\n",j,++*jptr);
	  printf("%d %d\n",k,*++kptr);
	getch();
}