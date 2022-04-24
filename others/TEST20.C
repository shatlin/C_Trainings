main()
{
 int a[5];
 clrscr();
 printf("%d..%d\n",sizeof(a),sizeof(&a));
 printf("%u...%u\n",a,&a);
 printf("%u...%u\n",a+1,&a+1);
 getch();
}