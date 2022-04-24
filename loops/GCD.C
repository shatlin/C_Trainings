void main()
{
/*int a=10,b=6;
a=a+b;
b=a-b;
a=a-b;
printf("%d %d",a,b);
getch();
*/
int i,a=25,b=15;
clrscr();
for(;;)
{
a=a%b;
if(a==0) break;
i=b;
b=a;
a=i;
}
printf("%d ",b);
getch();
}