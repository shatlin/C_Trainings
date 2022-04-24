main()
{
	int a[]={10,20,30,40};
	int j;
	int *i;
	i=a;
	for(j=0;j<4;j++)
	{
		printf("\n%d",*i);
		i++;
	}
}