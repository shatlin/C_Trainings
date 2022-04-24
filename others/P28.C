#include <stdio.h>
main()
{
   int x=2,y=2,z=0;
	clrscr();
	printf("%d\n",x==y!=z);  //  == has higher priority than !=
	if(x==y!=z)
	 printf("\ntrue");
	  else
	 printf("false");
	 getch();
}
/*  o/p
     1
     true */



