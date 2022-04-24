main()
{
	static char *s[]={
			  "networks",
			  "unix",
			  "java",
			  "windows"
			  };
	static char **ptr[]={s+3,s+2,s+1,s};
	char ***p=ptr;
	clrscr();
	printf("%s\n",**++p);
	printf("%s\n",*--*++p+3);
	printf("%s\n",*p[-2]+3);
	printf("%s\n",p[-1][-1]);
	getch();
}