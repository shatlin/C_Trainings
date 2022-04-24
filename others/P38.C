void f(ip)
int *ip;
{
  static int d=5;
  ip=&d;
}
main()
{
   int *ip;
   *ip=55;
   f(ip);
	printf("\n%d",*ip);
	getch();
}