#include <stdio.h>
#include <conio.h>
void main()
{
  float marks;
  clrscr();
  printf("Enter your marks in percent : ");
  scanf("%f",&marks);
   if((marks>=0)&&(marks<=40))
      printf("Failed");
   else if((marks>=40)&&(marks<=48))
	    printf("Third class");
	else if((marks>=48)&&(marks<=60))
		 printf("Second class");
	     else if((marks>=60)&&(marks<=75))
		     printf("First class");
		  else if((marks>=75)&&(marks<=100))
			  printf("First class with distinction");
}