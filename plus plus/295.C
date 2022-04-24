void main()
{
int i=_(10);
clrscr();
printf("%d\n",--i);
getch();
}
int _(int i)
{
return (i++); //the local variable 10 is returned and then incremented
//whose life ends in this block only.only  10 is returned.
}
