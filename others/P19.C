main()
{
   static int a[5]={5,10,15,20,25};
   int i,j,m,n;
   clrscr();
      i=++a[i];
      j=a[i]++;
    printf("\ti = %d j = %d a[i] = %d\n",i,j,a[i]);
      i=1;
      m=a[i++];
    printf("\ti = %d m = %d\n",i,m);
      i=2;
      n=a[++i];
	 printf("\ti = %d n = %d\n",i,n);
	 getch();
}
