#include <stdio.h>
#include<conio.h>
main()
{
   float k;
   clrscr();
   printf("Enter a no from the set (3.1, 4.5, 6.7) : ");
   scanf("%f",&k);
   switch(k)
   {
     case 3.1: printf("HELLO");
	       break;
     case 4.5: printf("BYE");
	       break;
     case 6.7: printf("HI");
	       break;
     default: printf("You have entered a wrong no.");
     }
}