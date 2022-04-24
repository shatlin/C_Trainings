main()
{
int i=100;
const int *p=&i;
clrscr();
i=200;
printf("%d",*p);
getch();
}