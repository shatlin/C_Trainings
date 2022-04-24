main()
{
	int i;
	int a=1,b=2;
	int aaa[3];
	clrscr();

	printf("\n%d %d\n",a,b);
	for(i=0;i<4;i++)
		aaa[i]=i;

	printf("\n%d %d\n",a,b);

	printf("a= %#X,b=%#X\n",&a,&b);
	printf("aaa[0]=%#X,aaa[1]=%#X,aaa[2]=%#X",&aaa[0],&aaa[1],&aaa[2]);
	printf("\naaa[3]=%#X,aaa[4]=%#X,aaa[5]=%#X",&aaa[3],&aaa[4],&aaa[5]);
	getch();
}
