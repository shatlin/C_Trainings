static int a=400;
int main()
{
static int *l=&a;
clrscr();
printf("%d",*l);
getch();
}