#include <stdio.h>
main()
{
   int i;
   clrscr();
   for(i=1;i<=10;i++){
     printf("%d\n",i);
     if(i==3)
	break;
      printf("BOTTOM OF LINE");
      }
  printf("OUT OF LOOP");
}

/* o/p
   1               |
   BOTTOM OF LINE1 |     "if 'break' is used"
   BOTTOM OF LINE2 |
   OUT OF LOOP     |

   1                         |
   BOTTOM OF LINE2           |
   BOTTOM OF LINE3           |
   4                         |
   BOTTOM OF LINE5           |    "if 'continue' is used"
   BOTTOM OF LINE6           |
   BOTTOM OF LINE7           |
   BOTTOM OF LINE8           |
   BOTTOM OF LINE9           |
   BOTTOM OF LINE10          |
   BOTTOM OF LINEOUT OF LOOP | */


