main()
{
   const int i=5;
   int *iptr=&i;
   clrscr();
   ++*iptr;
   printf("%d %d ",i,*iptr);
   getch();
}