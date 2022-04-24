void main()
{
int abc(int ,int ,...);
clrscr();
abc(1,0);
printf("\n\n\n");
abc(2,1,0);
printf("\n\n\n");
abc(3,2,1,0);
getch();
}
abc(int i,int j,...)
{
int x;
int *p=&j;
for(x=0;x<i;x++)
{
printf("%d  %d\n",*p,p);
p++;
}
}