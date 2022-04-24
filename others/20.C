main()
{
 char *a[]={"EVEN","ODD"};
 int n1;
 clrscr();
 printf("\n ENTER THE VALUE ::");
 scanf("%d",&n1);
 printf("\n THE  GIVEN NUMBER IS %s VALUE ",a[n1%2]);
 getch();
 }
