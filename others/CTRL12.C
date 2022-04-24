#include <stdio.h>
#include <conio.h>
main()
{
   int cho;
   clrscr();
      printf("Enter your choice between 1 to 5: ");
      scanf("%d",&cho);
      switch(cho)
      {
	case 1:printf("case 1\n");
	       continue;
	case 2:printf("case 2\n");
	       continue;
	case 3:printf("case 3\n");
	       continue;
      }
}
