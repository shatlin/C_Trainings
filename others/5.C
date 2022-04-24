main()
{
 int i=20,j=10,i1,j1;
 clrscr();
 i1=i/i++;
 printf("%d......%d\n",i1,i);
 i=++i/i;            /* i=i/i++ ==>2,i=i++/i==>2 & i=i/++i ==>1,i=++i/i  */
 printf("%d\n",i);
 j1=j/j++;
 j=j++;
 printf("%d.....%d",j1,j);
 getch();
 }