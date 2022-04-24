#include <stdio.h>
#include<conio.h>
main()
{
   float a=3.1,b=4.5,c=6.7;
   float k;
   clrscr();
   printf("Enter a no from the set (3.1, 4.5, 6.7) : ");
   scanf("%f",&k);
    if(k==a)
    {
      printf("HELLO");
    }
    else if(k==b)
	 {
	   printf("BYE");
	 }
	 else if(k==c)
	      {
	       printf("HI");
	      }
	      else
	      {
		printf("You have entered a wrong no");
	      }
	      getch();
}