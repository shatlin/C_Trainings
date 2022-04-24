main()
{
  int a=5,*ptr=&a;
   clrscr();
   printf("lvalue of a   : %p\n",&a);
	printf("rvalue of a   : %d\n",a);
	printf("ptr is        : %p\n",ptr);
	printf("lvalue of ptr : %p\n",&ptr);
   printf("rvalue of ptr : %d\n",*ptr);
   getch();
}