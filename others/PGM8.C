#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter an integer between 1 to 3 : ");
  scanf("%d",&a);
   if(a==1)
      printf("HELLO");
   else if(a==2)
	 printf("HI");
       else if(a==3)
	      printf("BYE");
	    else
		printf("Error!Enter your choice carefully");
}
