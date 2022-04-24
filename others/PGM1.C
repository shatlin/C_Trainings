#include <stdio.h>
#include <conio.h>
void main()
{
   char answer ='y';
   int a,b,c;
   clrscr();
   while(answer=='y')
   {
    printf("enter any two integer numbers :  ");
    scanf("%d %d",&a,&b);
    fflush(stdin);
    c=a+b;
    printf("the sum is %d\n",c);
    printf("do you want to continue ? ");
    scanf("%c",&answer);
    fflush(stdin);
    clrscr();
  }
}

