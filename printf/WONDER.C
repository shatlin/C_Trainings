void main()
{
int a=10;
int *c,*b;
c=&*&*&a;
b=c;
clrscr();
printf("%d %d %d",a,*b,*c);
getch(printf("\nhello"));
printf("\nhello",clrscr());
printf("hai",clrscr(clrscr(getch(printf("hai")))));
getch(getch(getch(getch)));
}

