void main()
{
  char *str[]={"fro","hai","res"};
  clrscr();
  //since pointer only base addresses access array elements
  //size of elements doesnot matter.
  printf("%d %d",sizeof(str),sizeof(str[0]));
}