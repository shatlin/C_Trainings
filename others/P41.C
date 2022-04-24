main()
{
   const int i=5;
   int array[i]={0},j;
	for(j=0;j<i;j++)
	{
		array[j]=i+j;
		printf("%d",array[j]);
	}
	getch();
}