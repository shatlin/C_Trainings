main()
{
char *p="alqc";
printf("\n%c....",++*(p++));
//printf("%c....",*p);
printf("%c",*++p);
getch();
}