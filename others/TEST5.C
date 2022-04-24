main()
{
 char ***p="hello";
 clrscr();
 printf("\n%s %u\n",p,p);
 printf("%u %u %u",*p,**p,***p);
 printf("\n%d %d %d %d",sizeof(p),sizeof(*p),sizeof(**p),sizeof(***p));
 getch();
}