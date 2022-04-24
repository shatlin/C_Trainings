void f(char *p)
{
p=(char *) malloc(6);
strcpy(p,"hello");
}

void main( )
{
char *p="bye";
f(p);
clrscr();
printf("%s",p);
}

