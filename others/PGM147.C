#include <stdio.h>
#include <conio.h>
void sum_int(int,int);
void sum_float(float,float);
main()
{
  int m=3,n=5;
  float p=3.1,q=5.3;
   clrscr();
  sum_int(m,n);
  sum_float(p,q);
  getch();
}
void sum_int(int x,int y)
{
  printf("the sum of int values is : %d\n",x+y);
}
void sum_float(float x,float y)
{
  printf("the sum of float values is : %f",x+y);
}

