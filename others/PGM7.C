#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter an integer between 1 to 3 : ");
  scanf("%d",&a);
  if(a==1) printf("HELLO");
  if(a==2) printf("HI");
  if(a==3) printf("BYE");
  if((a!=1)&&(a!=2)&&(a!=3))
    printf("Error!Enter your choice carefully.");
}
