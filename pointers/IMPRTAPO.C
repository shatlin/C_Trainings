main()
{
int c=10,d=20;
clrscr();
printf("\nbefore swap c=%d  d=%d",c,d);
swap(&c,&d);
printf("\nafter swap  c=%d  d=%d",c,d);
getch();
}
swap(int *cc,int *dd)
{
exchange(cc,dd);
}

exchange(int *cc,int *dd)
{
int t;
t=*cc;
*cc=*dd;
*dd=t;
}




