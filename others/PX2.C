#include <stdio.h>
main()
{
   char *ptr;
   clrscr();
   ptr=(char *)malloc(10);
   gets(ptr);
   puts(ptr);
   printf("%d",sizeof(ptr));
   printf("%d",sizeof(*ptr));
   getch();
}
