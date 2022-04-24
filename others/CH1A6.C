#include<stdio.h>
#include<conio.h>
float *multiply(int,float);

main()
{
	int i=3;
	float f=3.5,*prod;
//	clrscr();
//	printf("\nbefore a= %d aa= %u",a,aa);
	prod=multiply(i,f);
	printf("\nprod= %u value of address= %f",prod,*prod);
	getch();
}

float *multiply(int ii,float ff)
{
	float product;

	product=ii*ff;
	printf("\nproduct= %f address of product= %u",product,&product);
	return (&product);
}
