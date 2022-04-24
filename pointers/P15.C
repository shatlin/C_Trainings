main()
{
int a=5,*aa;
aa=&a;
a=power(*aa);
clrscr();
printf("\na = %d aa= %u",a,aa);
getch();
}

power(int p)
{
int b;
b=p * p;
return (b);
}