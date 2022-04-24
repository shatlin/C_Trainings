#include <stdio.h>
#include <conio.h>
void call(void);
main()
{
  char *p=main;
//  int main;
  clrscr();
//  scanf("%d",&main);
  printf("\n%Fp",&main);
  printf("\n%Fp",main);
  printf("\n%Fp",p);
  call();
  printf("\n%Fp",call);
  getch();
}
void call(void)
{
printf("\n%Fp",&main);
printf("\n%Fp",call);
}