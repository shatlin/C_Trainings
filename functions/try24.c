void main()
{ 
int x,y,s=2;
s*=3;
clrscr();
y=f(s);
x=g(s);
printf("%d  %d  %d ",s,y,x);
getch();
}

int t=8;
f(int a)
{
a+=-5;
t-=4;
return(a+t);
}

g(int a)
{ 
a=1;
t+=a;
return (a+t);
}