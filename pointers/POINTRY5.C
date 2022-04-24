main()
{
char c='A',*cc;
float i=15;
clrscr();
cc=&c;
printf("\nc=%c    cc=%u",*cc,cc);
cc=&i;
printf("\nc=%d    cc=%u",*cc,cc);
getch();
}