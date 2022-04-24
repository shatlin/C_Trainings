main()
{
int c=10,d=20;
clrscr();
printf("\nbefore swap c=%d  d=%d",c,d);
swap(&c,&d);
printf("\nafter swap  c=%d  d=%d",c,d);
getch();
}
//address of an integer stored in a integer pointer
//address of an integer pointer must be
//stored in a double(**)integer pointer

swap(int *cc,int *dd)
{
exchange(&cc,dd);
}
//pointers in c 24.in exchange two stars
//needed as it is a pointer to a pointer
exchange(int **cc,int *dd)
{
int t;
t=**cc;
**cc=*dd;
*dd=t;
}


