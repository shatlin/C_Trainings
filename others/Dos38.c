main()
{
 char **p=&"abcd";       // & has no use there ; so it is equivalent to single pointer
 clrscr();
 printf("%c",*p);
 printf("\n%u",*++*p); //garbage
 printf("\n%c",++*p);
 getch();
 }