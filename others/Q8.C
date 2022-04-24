#include<stdio.h>
main(int argc,char *argv[])
{
	char ch;
	int i;
	clrscr();
	printf("Enter any number..");
	scanf("%d",&i);

	fflush(stdin);

	printf("Enter any character..");
	scanf("%c",&ch);

	printf("\n%d %c",i,ch);

	printf("\nvalue of argc is %d",argc);
	getch();
}
