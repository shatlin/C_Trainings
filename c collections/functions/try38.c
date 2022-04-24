main()
{
int num=12345;
char *reverse();
clrscr();
printf("%5d is %s\n",num,reverse(num));
getch();
}

char *reverse (int value)
{
int digit,end=5;
static char decimal[5];
int begin=0;
decimal[end]='\0';
while(begin<end)
{
	digit=value%10;
	decimal[begin++]=digit+'0';
	value/=10;
}
return decimal;
}