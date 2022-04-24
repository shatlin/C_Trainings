main()
{
 char *p;
 printf("%d\n",sizeof(p));
 p=(char*)malloc(10);
 printf("%d\n",sizeof(p));
}