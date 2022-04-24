#include <stdio.h>
#include <conio.h>
main()
{
   int i,cho;
   clrscr();
   for(i=0;i<=3;i++)
   {
      printf("Enter your choice between 1 to 5: ");
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
}
