main()
{
	char far *aaa=0x0000FFFF;
	clrscr();
	printf("bedore incrementing addr is %Fp\n",aaa);
	aaa++;
	printf("After incrementing addr is %Fp",aaa);
	getch();
}