main()
{
int i=1,j=1;
for(;j;printf("%d %d\n",i,j))
	j=i++<=5;                 //only after expression is evaluated i++ value actually  changes
}