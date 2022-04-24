main()
{
	char c='ab';
	clrscr();
	printf("\nvalue of c is = %c and size of c is %d",c,sizeof(c));
	printf("\nbytes occupied by 7 = %d",sizeof(7));
	printf("\nbytes occupied by '7' = %d",sizeof('7')); //\\ <<=====  note
	printf("\nbytes occupied by '7a' = %d",sizeof('7a'));
	/*character data types can be one or two characters long*/
	printf("\nbytes occupied by \"7\" = %d",sizeof("7a"));  //in printf we use \" to nullify " as a special operator
	printf("\nbytes occupied by \"7abc\" = %d",sizeof("7abc"));
	printf("\nbytes occupied by 7.0 = %d",sizeof(7.0));
	getch();
}
