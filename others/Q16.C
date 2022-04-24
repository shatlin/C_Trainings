
main()
{
  int x,y=5,z=5;
  float f=10.00;
  clrscr();
do{
  printf("%*.*f\t%n",y--,z--,f,&x);
  printf("%d\n",x);
  f-=1.25;
}while((x-2)!=0);
getch();
}
