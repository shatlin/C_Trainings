#include <stdio.h>
#include <conio.h>
main()
{
   int i,cho;
   clrscr();
      scanf("%d",&cho);
      switch(cho)
      {
	case 1:printf("case 1\n");
	       continue;
	case 2:printf("case 2\n");
	       break;
	case 3:printf("case 3\n");
	       continue;
      }
}
