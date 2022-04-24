/*the name of the file is pgm2_2.c*/
#include <stdio.h>
#include <conio.h>
main(int argc,char *argv[],char *envp[])
{
  int i;
  clrscr();
  printf("the number of command line arguments are : %d\n\n",argc);
  printf("list of command line arguments : \n");
   for(i=0;i<argc;i++)
     printf("the argument %d : %s\n",i,argv[i]);
     printf("\n\n");
  printf("the environment variables passed to main are : \n");
  for(i=0;envp[i];i++)
  printf("%s\n",envp[i]);
  getch();
}

