#include <stdio.h>
#include <conio.h>
main()
{
   char *ptr;
   clrscr();
 if((ptr=(char *)malloc(0))!=NULL)
   gets(ptr);

   puts(ptr);
   printf("%d\n",sizeof(ptr));
   printf("%d",sizeof(*ptr));
   getch();
}
