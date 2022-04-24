main()
{
 int i=10,j=20,x=10,y=10;
 clrscr();
 i=i++;
 j=++j;
 printf("%d ..... %d",i,j);
 x=x*++x;
 y=y*y++;
 printf("\n%d..... %d",x,y);
 getch();
}