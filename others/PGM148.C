#include <stdio.h>
#include <conio.h>
#define SUM(F_NAME,DATA_TYPE,L)\
	void F_NAME(DATA_TYPE x,DATA_TYPE y)\
	{\
	   DATA_TYPE add;\
	   add=x+y;\
	   printf("The sum of "#DATA_TYPE"values is %"#L"\n",add);\
	}
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
  SUM(sum_int,int,d);
  SUM(sum_float,float,f);

