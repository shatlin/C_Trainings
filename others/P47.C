int abc(int);
main()
{
  int i=abc(100);
  int j=abc(100)==0;
  printf("%d %d",i,j);
  getch();
}
abc(int i)
{
   return i/10;
}

