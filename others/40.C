#include <stdio.h>
#include <conio.h>
void  cdecl  c_convention();
void pascal p_convention();
main()
{
  int a=5,b=2,c=13;
  clrscr();
  c_convention(a,b,c);
  p_convention(a,b,c);
  getch();
}
void cdecl c_convention(int i,int j)
{
 printf(" C CONVENTION :: A= %d ; B= %d",i,j);
 }

 void pascal p_convention(int i,int j)
 {
 printf("\nPASCAL CINVENTION :: A= %d ; B= %d",i,j);
 }