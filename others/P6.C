/* analyse the code */

main()
{
  register int x1=5;
  int x2=5;
  register int *ptr1;
  int *ptr2;
   clrscr();
    ptr1=&x1;
    ptr1=&x2;
    ptr2=&x1;
    ptr2=&x2;
   getch();
}