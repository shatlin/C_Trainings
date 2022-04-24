#include <stdio.h>
main()
{
      int i;                           output  infinite loop
      clrscr();                        ******
		for(i=0;printf("%d",i);++i<5);
		getch();
}
