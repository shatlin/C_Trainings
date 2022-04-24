 #include <stdio.h>
   main()
   { char *ptr="RITCHIE";
     clrscr();
     while(*ptr)
	printf("%c",(++*ptr++));
     printf("%s",ptr);
   }

