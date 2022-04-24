#include <stdio.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <sys\stat.h>
/*void file_length(void);*/
#if defined(_TINY_)
  #define p 1;
#elif defined(_SMALL_)
  #define p 2;
#elif defined(_MEDIUM_)
  #define p 3;
#elif defined(_COMPACT_)
  #define p 4;
#elif defined(_LARGE_)
  #define p 5;
#elif defined(_HUGE_)
  #define p 6;
#endif
main()
{
  char k;
  clrscr();
  k = p;
  switch(k)
  {
    case 1:printf("the memory model is : tiny\n");
	   file_length();
	   break;
    case 2:printf("the memory model is : small\n");
	   file_length();
	   break;
    case 3:printf("the memory model is : medium\n");
	   file_length();
	   break;
    case 4:printf("the memory model is : compact\n");
	   file_length();
	   break;
    case 5:printf("the memory model is : large\n");
	   file_length();
	   break;
    case 6:printf("the memory model is : huge\n");
	   file_length();
	   break;
    }
  getch();
}
void file_lebgth(void)
{
   int file_handle;
   int file_size;
   if((file_handle=open("pgm2_5.exe",O_RDONLY))==-1)
     printf("filr opening error for file pgm2_5.exe");
   else
    {
      file_size=filelength(file_handle);
      printf("the size of file pgm2_5.exe in bytes is %ld\n",file_size);
      close(file_handle);
    }
}

