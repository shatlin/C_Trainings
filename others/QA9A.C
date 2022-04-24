void ex(int x,...) //ellipsis should contain atleast one arg
{
	printf("hello");
}
void main()
{
	def(100);
	ex(9,8);
	getch();
}
def(int a,int b)
{
	printf("%d %d",a,b);
}
