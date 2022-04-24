void main()
  {
  int i=10;
  float da;
  int j=20;
  int t=30;
  int d;
  d=&i-&t; //i=1000 &j=1002 => d=1 and not 2;
  clrscr();
  printf("%d   %d  %d\n",i,j,d);
  getch();
 }