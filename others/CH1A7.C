#include<stdio.h>
#include<conio.h>
main()
{
	char *c;
	int *i;
	long  *l;
	float  *f;
	double *d;
	printf("\nc= %u,c+1= %u",c,c+1);
	printf("\ni= %u,i+1= %u",i,i+1);
	printf("\nl= %u,l+1= %u",l,l+1);
	printf("\nf= %u,f+1= %u",f,f+1);
	printf("\nd= %u,d+1= %u",d,d+1);
	getch();
}