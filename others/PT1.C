main()
{
  int a,b,c,d;
  int a1,b1,c1,d1;
 clrscr();
 a=b=5;
 c=d=50;
  ((a==b)?c:d)=10;
  printf("%d %d %d %d",a,b,c,d);
 a1=5;b1=55;
 c1=d1=50;
  *((a1==b1)?&c1:&d1)=10;
  printf("%d %d %d %d",a1,b1,c1,d1);
}