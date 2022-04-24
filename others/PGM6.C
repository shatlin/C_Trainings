#include <stdio.h>
#include <conio.h>
void main()
{

  int a;
   clrscr();
   printf("enter an integer between 1 to 3 : ");
   scanf("%d",&a);
   switch(a)
   {
    case 1:printf("HELLO");
	   break;
    case 2:printf("HI");
	   break;
    case 3:printf("BYE");
	   break;
   default:printf("Error!enter your choice carefully.");
   }
   getch();
}


