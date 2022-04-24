print(j) //when no type specified default int is taken
{
	return printf("\n%d",j);
}

void main()
{
	clrscr(); // '\n' is considered as a character;
	printf("\n%d",print(printf("\n%d",(print(printf("\n%d",100))))));
	getch();

}
