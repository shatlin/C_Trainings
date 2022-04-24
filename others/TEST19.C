main()
{
 static char str[]="MalayalaM";
 char *a,*b;
 clrscr();
 a=str;
 b=str+strlen(str)-1;
 while(a!=b)
 {
	printf("%c",*a);
	a++;
	printf("%c",*b);
	b--;
  }
  getch();
}