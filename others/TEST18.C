extern char **environ;
main()
{
 int i=0;
 clrscr();
 for(;environ[i];i++)
  printf("%s\n",environ[i]);
getch();
}