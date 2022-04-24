main()
{
	int i=10;
	printf("\nvalue of i is %d address of i is %u",i,&i);
	&i=7200;  //error
	printf("\nvalue of i is %d address of i is %u",i,&i);

	getch();
}