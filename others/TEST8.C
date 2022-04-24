main(int argc,char *argv[])
{
 char **ptr=argv;
 char ***p=&ptr;
 clrscr();
 printf("%s\n",p[0][1]);
 getche();
}