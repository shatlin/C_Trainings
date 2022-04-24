main()
{
 char blocks[3]={'x','y','z'};
 char *ptr=&blocks[0],temp;
 clrscr();
/*   temp=blocks[0];
	temp=*(blocks+2);
	temp=*(ptr+1);
	temp=*ptr;
	ptr=blocks+1;
	temp=*ptr;
	temp=*(ptr+1);       */
	ptr=blocks;
	printf("\n%s",ptr);
	temp=*++ptr;
	printf("\n%c",temp);     //y
	temp=++*ptr;
	printf("\n%c",temp);     //z
	temp=*ptr++;
	printf("\n%c",temp);     //z
	temp=*ptr;
	printf("\n%c",temp);     //z
	getch();
}