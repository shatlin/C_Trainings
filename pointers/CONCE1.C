  void main()
  {
  int *c;
  int *b;
  int a=10;
  b=&a;
  c=&b;
  clrscr();
  printf("%u   %u   %d  %d\n",b,c,*b,**c);
  //printf("\n%u   %u",b,b+1);
  getch();
  }