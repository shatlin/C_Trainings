void main()
{
int x=35,y=125,a;
clrscr();
while(a!=0)
{
a=x%y;
x=y;
y=a;
}
printf("%d",x);
}
