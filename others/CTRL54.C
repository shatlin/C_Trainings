main()
{
int x,y,z=y=x=-1;
  if(!(z=++x&&++y||++z))
    printf("x = %d,y = %d,z = %d",x,y,z);
  else
    printf("no output");
}