#include <stdio.h>
#include <conio.h>
int x=-1;
void main(void)
 {

	int a[3][2]=
	{
		 {65,66},
		 {67,68},
		 {69,70}
	};
	if (x==2)
		exit(0);
	else
	{
		  ++x;
		  display(&a[x],2);
	};
	 getch();
 }
 display(int *i,int m)
  {
	  int k,l;
	  for(l=0;l<m;l++)
	  {
		printf("\t%c",*(i+l));
	  }
	  printf("\n");
	  main();
 }