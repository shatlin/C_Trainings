main()
{
 char *p;
 printf("\n%d %d %d\n",sizeof(p),sizeof(*p),sizeof(&p)); //sizeof(*p) is the size of *p
 p=(char*)malloc(10);
 printf("%d %d %d\n",sizeof(p),sizeof(*p),sizeof(&p));
 getch();
}