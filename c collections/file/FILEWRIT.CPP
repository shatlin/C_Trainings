#include<dos.h>
#include<conio.h>
#include<process.h>
#include"stdio.h"
main()
{
	clrscr();
	char another = 'y';
	FILE *fp;
	struct emp
	{
		char name[40];
		int age;
	};
	struct emp e;

	fp = fopen("employee.dat","w");

	if(fp==NULL)
	{
		puts("cannot open");
		exit(0);
	}

	while(another=='y')
	{
		printf("\n Enter name age");
		scanf("%s %d",e.name,&e.age);
		fprintf(fp,"%s %d",e.name,e.age);
		printf("another record");
		fflush(stdin);
		another = getche();
	}
	fclose(fp);
}

