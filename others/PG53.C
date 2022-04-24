main()
{
	enum subject
	{
		chemistry,
		maths,
		physics
	};
	struct result
	{
		char name[30];
		enum subject science;
	};

	struct result my_result;
	clrscr();
	strcpy(my_result.name,"Rajiv Dhaskar");
	my_result.science=physics;

	printf("name: %s\n",my_result.name);
	printf("pass in subject : %s",my_result.science);
	getch();
}